#include <CLI/CLI.hpp>
#include <string>

int main(int argc, char **argv) {
  CLI::App app{"ASCII Weather TUI"};

  std::string city;
  std::string units = "metric";

  bool minimal = false;
  bool verbose = false;
  bool no_color = false;

  app.add_option("city,c", city, "City Name")->required(true);
  app.add_option("--units,-u", units, "Units (metric/imperial)");
  app.add_flag("--minimal,-m", minimal, "Minimal output");
  app.add_flag("--verbose,-v", verbose, "Verbose output");
  app.add_flag("--no-color", no_color, "Disable colors");

  CLI11_PARSE(app, argc, argv);

  return 0;
}
