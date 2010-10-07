/**********************************************************\
Original Author: Richard Bateman (taxilian)

Created:    Oct 22, 2009
License:    Dual license model; choose one of two:
            New BSD License
            http://www.opensource.org/licenses/bsd-license.php
            - or -
            GNU Lesser General Public License, version 2.1
            http://www.gnu.org/licenses/lgpl-2.1.html

Copyright 2009 Richard Bateman, Firebreath development team
\**********************************************************/

#ifndef H_FB_ASYNCBROWSERCALL
#define H_FB_ASYNCBROWSERCALL

#include <vector>
#include <string>
#include "APITypes.h"
#include "BrowserObjectAPI.h"

namespace FB {

    class AsyncBrowserCall
    {
    public:
        virtual ~AsyncBrowserCall(void);
        static void CallMethod(JSObject obj, const std::string& method,
            const std::vector<variant> &inParams);

    protected:
        AsyncBrowserCall(JSObject obj, const std::string& method,
            const std::vector<variant> &inParams);

        static void asyncCallback(void *userData);

        JSObject m_obj;
        std::vector<variant> m_params;
        std::string m_methodName;
    };

};

#endif
