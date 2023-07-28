i;main(a,j) {
    for(scanf("%d",&a);i++<a;) {
        for(j=0;j++<a-i;)printf(" ");
        for(j=0;j++<i;)printf("*");
        puts("");
    }
}