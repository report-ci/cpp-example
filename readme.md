# C++ examples


| Branch | Travis | Suites | Cases | Checks | 
|--------|--------|--------|-------|--------|
| develop | [![Build Status](https://travis-ci.com/report-ci/cpp-example.svg?branch=develop)](https://travis-ci.com/report-ci/cpp-example) | [![Report Status](https://api.report.ci/status/report-ci/cpp-example/badge.svg?branch=develop&level=suites)](https://report.ci/reports/gh/report-ci/cpp-example/ref/develop) | [![Report Status](https://api.report.ci/status/report-ci/cpp-example/badge.svg?branch=develop&level=cases)](https://report.ci/reports/gh/report-ci/cpp-example/ref/develop) | [![Report Status](https://api.report.ci/status/report-ci/cpp-example/badge.svg?branch=develop&level=checks)](https://report.ci/report/gh/report-ci/cpp-example/ref/develop) | 
| master | [![Build Status](https://travis-ci.com/report-ci/cpp-example.svg?branch=master)](https://travis-ci.com/report-ci/cpp-example)   | [![Report Status](https://api.report.ci/status/report-ci/cpp-example/badge.svg?branch=master&level=suites)](https://report.ci/reports/gh/report-ci/cpp-example/ref/master)  | [![Report Status](https://api.report.ci/status/report-ci/cpp-example/badge.svg?branch=master&level=cases)](https://report.ci/reports/gh/report-ci/cpp-example/ref/master)  | [![Report Status](https://api.report.ci/status/report-ci/cpp-example/badge.svg?branch=master&level=checks)](https://report.ci/report/gh/report-ci/cpp-example/ref/master)  | 


See the [pull requests](https://github.com/report-ci/cpp-example/pulls) for examples.

This repository demonstrates how to use report.ci with some c++ examples 

```yml
after_script:
  - python <(curl -s https://report.ci/report.py)
  - curl -s https://report.ci/report.py | python - --framework --include-as-cute */cute*.xml
```

Note that *cute*, *cpputest*, *cxxtest* and *googletest* do not have autodetection.
