using System;
using System.Collections.Generic;
using System.Linq;
using System.Web;
using System.Web.UI;
using System.Web.UI.WebControls;

namespace WebApplication7
{
    public partial class WebForm2 : System.Web.UI.Page
    {
        protected void Page_Load(object sender, EventArgs e)
        {
            Label1.Text = (String)Session["UN"];

            Label2.Text = Application["UN"].ToString();
            Label3.Text = Application["NOU"].ToString();
        }

        protected void Button1_Click(object sender, EventArgs e)
        {

        }
    }
}