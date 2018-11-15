void read(FILE *s, struct inhabitant **h, int *m) {
  int i, ntok;
  struct inhabitant *tmph;

  ntok = fscanf(s, "%d", m);

  if(ntok != 1 || *m < 0) {
    fprintf(stderr, "Unable to read file.\n");
    exit(-1);
  }

  if((*h = (struct inhabitant *)malloc(sizeof(struct inhabitant) * (*m))) == NULL) {
    fprintf(stderr, "Unable to allocate space for inhabitants.\n");
    exit(-1);
  }

  tmph = *h;
  for(i = 0; i < (*m); ++i) {
    ntok = fscanf(s, "%d %s %s %d", &(tmph[i].distance), (char *)&(tmph[i].prenom), (char *)&(tmph[i].nom), (int *)&(tmph[i].zip));
    if(ntok != 4) {
      fprintf(stderr, "File wrongly formatted.\n");
      exit(-1);
    }
  }
}
