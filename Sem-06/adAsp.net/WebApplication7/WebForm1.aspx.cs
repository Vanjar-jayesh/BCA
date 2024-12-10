using System;
using System.Collections.Generic;
using System.Linq;
using System.Web;
using System.Web.UI;
using System.Web.UI.WebControls;

namespace WebApplication7
{
    public partial class WebForm1 : System.Web.UI.Page
    {
        protected void Page_Load(object sender, EventArgs e)
        {

        }

        protected void Button1_Click(object sender, EventArgs e)
        {
            if(TextBox1.Text == "bca" && TextBox2.Text == "1234")
            {
                Session["UN"] = TextBox1.Text;
                Response.Redirect("~/WebForm2.aspx");
            }
        }
    }
}