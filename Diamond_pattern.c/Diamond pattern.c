main()
{
    int columns,rows,k=0;

    for(columns=1;columns<=7;columns++)
    {
        columns<5?k++:k--;
        for(rows=1;rows<=7;rows++)
        {
            if(rows>=5-k&&rows<=3+k)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
    getch();
}
