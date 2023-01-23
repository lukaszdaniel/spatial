void
VR_alset(double *alph, int *nalph);

void
VR_gls(double *x, double *y, double *z, int *n, int *np,
       int *npar, double *f, double *l, double *r, double *bz,
       double *wz, double *yy, double *w, int *ifail, double *l1f);

void
VR_ls(double *x, double *y, double *z, int *n, int *np,
      int *npar, double *f, double *r, double *bz, double *wz,
      int *ifail);

void
VR_fmat(double *f, double *x, double *y, int *n, int *np);

void
VR_frset(double *xl, double *xu, double *yl, double *yu);

void
VR_valn(double *z, double *x, double *y, int *n, double *beta, int *np);

void
VR_krpred(double *z, double *xs, double *ys, double *x, double *y,
	  int *npt, int *n, double *yy);

void
VR_prvar(double *z, double *xp, double *yp, int *npt,
	 double *x, double *y, double *l, double *r, int *n,
	 int *np, int *npar, double *l1f);

void
VR_correlogram(double *xp, double *yp, int *nint, double *x,
	       double *y, double *z, int *n, int *cnt);

void
VR_variogram(double *xp, double *yp, int *nint, double *x,
	     double *y, double *z, int *n, int *cnt);

void
VR_ppset(double *area);

void
VR_ppget(double *xx);

void
VR_sp_pp2(double *x, double *y, int *npt, int *k,
	  double *h, double *dmin, double *lm, double *fs);

void
VR_pdata(int *npt, double *x, double *y);

void
VR_simpat(int *npt, double *x, double *y, double *c,
	  double *r, int *init);

void
VR_simmat(int *npt, double *x, double *y, double *r);

void
VR_plike(double *x, double *y, int *npt, double *c,
	 double *r, int *ng, double *target, double *res);

