/*
 Derived from source code of TrueCrypt 7.1a, which is
 Copyright (c) 2008-2012 TrueCrypt Developers Association and which is governed
 by the TrueCrypt License 3.0.

 Modifications and additions to the original source code (contained in this file) 
 and all other portions of this file are Copyright (c) 2013-2015 IDRIX
 and are governed by the Apache License 2.0 the full text of which is
 contained in the file License.txt included in VeraCrypt binary and source
 code distribution packages.
*/

#ifndef TC_HEADER_Main_Forms_AboutDialog
#define TC_HEADER_Main_Forms_AboutDialog

#include "Forms.h"

namespace VeraCrypt
{
	class AboutDialog : public AboutDialogBase
	{
	public:
		AboutDialog (wxWindow* parent);
		
		void OnWebsiteHyperlinkClick (wxHyperlinkEvent& event) { Gui->OpenHomepageLink (this, L"main"); }
	};
}

#endif // TC_HEADER_Main_Forms_AboutDialog
