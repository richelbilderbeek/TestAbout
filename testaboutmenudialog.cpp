//---------------------------------------------------------------------------
/*
TestAbout, tests the About classes
Copyright (C) 2012-2015 Richel Bilderbeek

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 3 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
GNU General Public License for more details.
You should have received a copy of the GNU General Public License
along with this program. If not, see <http://www.gnu.org/licenses/>.
*/
//---------------------------------------------------------------------------
//From http://www.richelbilderbeek.nl/ToolTestAbout.htm
//---------------------------------------------------------------------------
#include "testaboutmenudialog.h"

#include <cassert>
#include <iostream>

#include "trace.h"
#include "testtimer.h"

int ribi::TestAboutMenuDialog::ExecuteSpecific(const std::vector<std::string>& argv) noexcept
{
  #ifndef NDEBUG
  Test();
  #endif
  const int argc = static_cast<int>(argv.size());
  if (argc == 1)
  {
    std::cout << GetHelp() << '\n';
    return 1;
  }
  assert(!"TODO");
  return 0;
}

ribi::About ribi::TestAboutMenuDialog::GetAbout() const noexcept
{
  About a(
    "Richel Bilderbeek",
    "TestAbout",
    "test the About classes",
    "November 30th of 2015",
    "2012-2015",
    "http://www.richelbilderbeek.nl/ToolTestAbout.htm",
    GetVersion(),
    GetVersionHistory()
   );
  //a.AddLibrary("ProFile version: " + QtCreatorProFile::GetVersion());
  return a;
}

ribi::Help ribi::TestAboutMenuDialog::GetHelp() const noexcept
{
  return ribi::Help(
    this->GetAbout().GetFileTitle(),
    this->GetAbout().GetFileDescription(),
    {

    },
    {

    }
  );
}


std::string ribi::TestAboutMenuDialog::GetVersion() const noexcept
{
  return "2.0";
}

std::vector<std::string> ribi::TestAboutMenuDialog::GetVersionHistory() const noexcept
{
  return {
    "2012-01-25: Version 1.0: initial version in Qt4 and C++98",
    "2013-07-12: Version 1.1: transitioned to Qt5 and C++11",
    "2013-09-05: version 1.2: transition to namespace ribi",
    "2013-11-28: version 1.3: conformized to ProjectRichelBilderbeek",
    "2015-11-30: version 2.0: moved to own GitHub",
  };
}

#ifndef NDEBUG
void ribi::TestAboutMenuDialog::Test() noexcept
{
  {
    static bool is_tested{false};
    if (is_tested) return;
    is_tested = true;
  }
  const TestTimer test_timer(__func__,__FILE__,1.0);
}
#endif
