# C++ examples


| Branch | Travis | report.ci [bandit] | report.ci [cpputest] | report.ci [cute] | report.ci [cxxtest] |
|--------|--------|--------------------|----------------------|------------------|---------------------|
| develop | [![Build Status](https://travis-ci.com/report-ci/cpp-example.svg?branch=develop)](https://travis-ci.com/report-ci/cpp-example) | [![Report Status](https://api.report.ci/status/report-ci/cpp-example/badge.svg?branch=develop&level=cases&build=bandit)](https://api.report.ci/status/report-ci/cpp-example?branch=develop&build=bandit) | [![Report Status](https://api.report.ci/status/report-ci/cpp-example/badge.svg?branch=develop&level=cases&build=cpputest)](https://api.report.ci/status/report-ci/cpp-example?branch=develop&build=cpputest) | [![Report Status](https://api.report.ci/status/report-ci/cpp-example/badge.svg?branch=develop&level=cases&build=cute)](https://api.report.ci/status/report-ci/cpp-example?branch=develop&build=cute) | [![Report Status](https://api.report.ci/status/report-ci/cpp-example/badge.svg?branch=develop&level=cases&build=cxxtest)](https://api.report.ci/status/report-ci/cpp-example?branch=develop&build=cxxtest) |
| master | [![Build Status](https://travis-ci.com/report-ci/cpp-example.svg?branch=master)](https://travis-ci.com/report-ci/cpp-example) | [![Report Status](https://api.report.ci/status/report-ci/cpp-example/badge.svg?branch=master&level=cases&build=bandit)](https://api.report.ci/status/report-ci/cpp-example?branch=master&build=bandit) | [![Report Status](https://api.report.ci/status/report-ci/cpp-example/badge.svg?branch=master&level=cases&build=cpputest)](https://api.report.ci/status/report-ci/cpp-example?branch=master&build=cpputest) | [![Report Status](https://api.report.ci/status/report-ci/cpp-example/badge.svg?branch=master&level=cases&build=cute)](https://api.report.ci/status/report-ci/cpp-example?branch=master&build=cute) | [![Report Status](https://api.report.ci/status/report-ci/cpp-example/badge.svg?branch=master&level=cases&build=cxxtest)](https://api.report.ci/status/report-ci/cpp-example?branch=master&build=cxxtest) |


See the [pull requests](https://github.com/report-ci/cpp-example/pulls) for examples.

This repository demonstrates how to use report.ci with some c++ examples 

```yml
after_script:
  - python <(curl -s https://report.ci/upload.py)
  - curl -s https://report.ci/upload.py | python - --framework cute --include */cute*.xml
```

Note that cute does not have autodetection.