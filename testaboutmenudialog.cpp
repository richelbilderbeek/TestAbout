#include "testaboutmenudialog.h"

#include <cassert>
#include <iostream>

int ribi::TestAboutMenuDialog::ExecuteSpecific(const std::vector<std::string>& argv) noexcept
{
  const int argc = static_cast<int>(argv.size());
  if (argc == 1)
  {
    std::cout << GetHelp() << '\n';
    return 0;
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
