int calc_1(int num1, int num2, int op)
{
    int result;
    result=0;

     switch(op)
    {
        case 1:
            result = num1 + num2;
            break;

        case 2:
            result = num1 - num2;
            break;

        case 3:
            result = num1 * num2;
            break;

        case 4:
                if (num2==0)
                {
                    result= 0;
                    break;
                }

            result = num1 / num2;
            break;
            
        default:
           return 0;
    }
    return result;
}
