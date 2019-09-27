#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int main()
{
    int sales_cgst=0, sales_sgst=0, sales_igst=0, p_igst=0, p_cgst=0, p_sgst=0, t_p=0, t_s=0, igst_adj_igst=0, igst_adj_cgst=0, igst_adj_sgst=0, p_igst_rem=0;
    int igst_payable=0,cgst_payable=0, sgst_payable=0, igst_carried_forward=0, sgst_carried_forward=0, cgst_carried_forward=0;
    cout << "ALL THE CALCULATIONS WILL BE DONE ASSUMING NO ITC BALANCE FROM PREVIOUS PERIOD\n" << endl;
     cout << "ENTER SALES I-GST: " ;
    cin >> sales_igst;
    cout << "\n";
    cout << "ENTER SALES C-GST: " ;
    cin >> sales_cgst;
    cout << "\n";
    sales_sgst = sales_cgst;
     cout << "ENTER PURCHASE I-GST: " ;
    cin >> p_igst;
    cout << "\n";
    cout << "ENTER PURCHASE C-GST: " ;
    cin >> p_cgst;
    p_sgst = p_cgst;
    
    //calculating total purchase  and sales tax;
    t_p = p_igst + p_cgst + p_sgst;
    t_s = sales_igst + sales_cgst + sales_sgst;
    
    if(t_s > t_p)   // when there will be tax amount to be paid
    {
        if(p_igst > sales_igst )
        {     igst_adj_igst = sales_igst; 
                p_igst_rem = p_igst - sales_igst;
                igst_payable = 0;}
        else  {    igst_adj_igst = p_igst;
                      igst_payable = sales_igst - p_igst;
                      p_igst_rem = 0;}
        if(p_igst_rem > (sales_cgst - p_cgst))
        {
            igst_adj_cgst = p_igst_rem - (sales_cgst - p_cgst);
            cgst_payable = 0;
            p_igst_rem = p_igst_rem - igst_adj_cgst;
        }
        else{   igst_adj_cgst = p_igst_rem;
                    cgst_payable = sales_cgst - p_cgst - igst_adj_cgst;
                    p_igst_rem = 0;
            }
        if(p_igst_rem > (sales_sgst - p_sgst))
        {
            igst_adj_sgst = p_igst_rem - (sales_sgst - p_sgst);
            p_igst_rem = p_igst_rem - igst_adj_sgst;
            igst_carried_forward = p_igst_rem;
            sgst_payable = 0;
        }
        else
        {
            igst_adj_sgst= p_igst_rem;
            sgst_payable = sales_sgst - p_sgst - igst_adj_sgst;
        }
    }
    else // t_p > t_s  ie when no tax has to be paid.
    {
        if(p_igst > sales_igst )
        {     igst_adj_igst = sales_igst; 
                p_igst_rem = p_igst - sales_igst;
                igst_payable = 0;}
        else  {    igst_adj_igst = p_igst;  
                      igst_payable = sales_igst - p_igst;
                      p_igst_rem = 0;}
        if( p_cgst > sales_cgst )
        {
            if(p_igst > (sales_cgst+sales_sgst))
            {
                    igst_adj_cgst = sales_cgst;
                    igst_adj_sgst = sales_sgst;
                    cgst_carried_forward = p_cgst;
                    sgst_carried_forward = p_sgst;
                    p_sgst = 0;
                    p_cgst = 0;
                    igst_carried_forward = p_igst_rem - sales_cgst - sales_sgst;
            }
            else
            {
                igst_adj_cgst = p_igst_rem / 2;
                igst_adj_sgst = p_igst_rem - igst_adj_cgst;
                cgst_carried_forward = p_cgst + igst_adj_cgst - sales_cgst;
                sgst_carried_forward = p_sgst + igst_adj_sgst - sales_sgst;
                p_sgst = sales_sgst - igst_adj_sgst;
                p_cgst = sales_cgst - igst_adj_cgst;
                igst_carried_forward = 0;
            }
        }
        else
        {
            if( p_igst_rem > (sales_sgst + sales_cgst) )
            {  }
            else
            {
                if((p_igst_rem-(sales_cgst-p_cgst)) < sales_sgst)
                {
                    igst_adj_cgst = sales_cgst - p_cgst;
                    igst_adj_sgst = p_igst_rem - igst_adj_cgst;
                    cgst_carried_forward = 0;
                    sgst_carried_forward = p_sgst+igst_adj_sgst - sales_sgst;
                    p_sgst = p_sgst - sgst_carried_forward;
                }
                else
                {
                    igst_adj_cgst = p_igst_rem / 2;
                    igst_adj_sgst = (p_igst_rem) - igst_adj_cgst;
                    cgst_carried_forward = p_cgst - (sales_cgst - igst_adj_cgst);
                    p_cgst = p_cgst - cgst_carried_forward;
                    sgst_carried_forward = p_sgst - (sales_sgst - igst_adj_sgst);
                    p_sgst = p_sgst - sgst_carried_forward;
                }
            }
        }
    }
    cout << "\n"<< right;
    cout << setw(6) << right <<" |"<< setw(15) <<   "sales payable" << setw(12)<< "igst i/p" << setw(12)<< "cgst i/p" << setw(12)<< "sgst i/p"<< setw(12) << "tax pay" << setw(9)<< "c/f\n" << endl;
    cout << setw(6) << "igst |" << setw(15)  << sales_igst << setw(12)           << igst_adj_igst  <<  setw(12)<< "0 "       << setw(12)<<  "0" <<         setw(12) << igst_payable<< setw(9)<< igst_carried_forward << "\n" << endl;
	cout << setw(6) << "cgst |"      << setw(15) << sales_cgst            << setw(12) << igst_adj_cgst << setw(12)<< p_cgst    << setw(12)  << "0"  << setw(12)  << cgst_payable<< setw(9) << cgst_carried_forward <<"\n" << endl;
    cout << setw(6) << "sgst |"  << setw(15) << sales_sgst            << setw(12) << igst_adj_sgst << setw(12)<< "0"   << setw(12)  << p_sgst  << setw(12)  << sgst_payable<< setw(9) << sgst_carried_forward <<"\n" << endl;
    system("pause");
    return 0;
}