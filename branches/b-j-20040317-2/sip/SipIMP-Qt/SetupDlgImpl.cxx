
#include <stdlib.h>
#include <qlineedit.h>
#include <qcombobox.h>
#include "SetupDlgImpl.hxx"

SetupDlgImpl::SetupDlgImpl( QWidget* parent,
		        const char* name,
		        bool modal,
			WFlags f )
:
SetupDlg( parent, name, modal, f ),
mPort( 0 )
{
  const char* udp = "UDP";
  const char* tcp = "TCP";
  Protocol->insertItem( udp );
  Protocol->insertItem( tcp );
}


void
SetupDlgImpl::updateData()
{
  mHost = ServerName->text();
  mUser = UserName->text();
  mPassword = Password->text();
  mPort = atoi( Port->text() );
  mProtocol = Protocol->currentText();
  mContact = NatConfig->text();
  mKey = "";
  mOutbound = "";

  this->hide();
}


/* ====================================================================
 * The Vovida Software License, Version 1.0 
 */
