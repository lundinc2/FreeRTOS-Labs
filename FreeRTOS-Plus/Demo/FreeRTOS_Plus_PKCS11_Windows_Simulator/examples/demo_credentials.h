/*
 * FreeRTOS PKCS #11 V1.0.3
 * Copyright (C) 2020 Amazon.com, Inc. or its affiliates.  All Rights Reserved.
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy of
 * this software and associated documentation files (the "Software"), to deal in
 * the Software without restriction, including without limitation the rights to
 * use, copy, modify, merge, publish, distribute, sublicense, and/or sell copies of
 * the Software, and to permit persons to whom the Software is furnished to do so,
 * subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in all
 * copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY, FITNESS
 * FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR
 * COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER
 * IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN
 * CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.
 *
 * http://aws.amazon.com/freertos
 * http://www.FreeRTOS.org
 */

#ifndef _DEMO_CREDENTIALS_H_
#define _DEMO_CREDENTIALS_H_

#define pkcs11demo_RSA_PRIVATE_KEY "" \
"-----BEGIN RSA PRIVATE KEY-----\n" \
"MIIEowIBAAKCAQEAwLBla8T5AZ7+Kuvdam5PNv768gBqviiwDSCrcIu2CN9/TAtF\n" \
"D+euyAB7l56wFb8tZXCXTL8IvkOFsW/dhgkv3MSa1GSfDjSzd9diz8UVdDDtngWr\n" \
"S4uWGK9k5nNWslAZVdbgGGIsYNLEy3as2WDWHTgq6wUIYLyOMN7Ii2D6LvWYT7bP\n" \
"DSWVYIHxpac5q6nIlqfmBWJGGseg0xgn5OGX46c5Q1ZbP+UxHwRLEs32Yngntwnq\n" \
"nmSYigSM4q70/DL3G9n2EXX6HUe6ef0grWZ754BI33V6HU2QFlltxApPTpztwuXy\n" \
"SRP+JmDyS06A5BB7xjxBWGiTPexvwy9g0eJ8AQIDAQABAoIBABH9pkqMpo8vMB4D\n" \
"zbWNPRoubnG/9jdxBxcCsN8ePE3RyEnqV3VntVr5KJD8gQZWxj9NZuMEhyV0mnv5\n" \
"rN5B51UeijJAftVNuF/9HT228gzaMKVrdBXmn4oIfkxCAps9fVAVcvDz4Z7crwEs\n" \
"QHE/aF5sCx3MZ37YvBH2CxVwZYuSutrYs9mIAGIHPiEKS/LN0yxrOs+lpNic0yqh\n" \
"dpWpi/IyalpEkpxXuTBu0u8u/cX8b3BUHAyFpKXm4gF/n609CGL1jexonJLbJb2B\n" \
"I6Bmxdh4/IpufaGUJ3r7oYal0Q3grV7AA28bXI+Mg+Uzz/6I49Tthtn7VPONnTq4\n" \
"aVM+700CgYEA/tntlWjB//UEDahsvyBmgJOUyeZuYG1asbFKG515rncBBHrI3QqW\n" \
"78rVVqCQl4w1W0hh3rHmaRC8XneWljGyZ264672wmaoy8T6eOiDiQITfxk3ayhjQ\n" \
"Yw1IcCvyUzes6RrbKW3qwIFc0qwhMU0t8iofr8plaGktJs+iTtoqbjMCgYEAwY69\n" \
"RcPbSFrl7rAFg34tZss0nJC65QoGO9eEnX1UA4qW3vKEq6WKRNYrjPu4Cb3cfVQb\n" \
"4I3pnZDQXUJ8sBX89UGxwlPVEPtQVjyhf9vH3zVTHHgfz1m4P0VD183Bj+mDkQsN\n" \
"1LuVMaQiZRU2C+yyflJL2n88fJXNBD2+L09F0PsCgYEAq94COIF2W4w8GI3eEKLk\n" \
"HY/phqNtCoCU6kK6zJbNqde9iuzXKyJqGfq7FvmfqWQ304Cj6BAnZ/GOZ1LU7iND\n" \
"wjdMZEb/oxHB2ym0gVUN4B773ntAsow7dKFPmb45ZN+mL2oaJP1olDxpgfXtSJdZ\n" \
"BfhceCvRabGMbqEWP4EnnjsCgYBgzo1nuT+RfrUFnlADpjX69aNIszJmn47imzYe\n" \
"trIwWz5+H3mvh8oSB7QcfUFczfLbVBflRdUUE3vDSR+nyjeMSuEnOlqUdb2GhCia\n" \
"FEhxIPCCiqoOQOdf7bqy0pv+6GH/RzIRtgg2ncr+F4/Cgw37FBoQHBcakKnLdz4J\n" \
"13IpxQKBgAEj3FDco2hHjdmEVCVXTVA+SPhwkTlzaMk/GkS9ncteaJrHgPaTc3i2\n" \
"PJz7uuDt64hf5O9Zi5ecXsPueG8DN3oIPMoFbo/mA2A4ZBUnB8BDrC+3inYuDRxu\n" \
"GdWIVVVleMjIDhuhavfzmfBgoir2wQgwnJLPd0vOMDafC6WlcN17\n" \
"-----END RSA PRIVATE KEY-----"

#define pkcs11demo_RSA_CERT "" \
"-----BEGIN CERTIFICATE-----\n" \
"MIIDnTCCAoUCFD3osV9U97KOnGG8vhc+Cr1WJXt8MA0GCSqGSIb3DQEBCwUAMIGI\n" \
"MQswCQYDVQQGEwJVUzELMAkGA1UECAwCV0ExDjAMBgNVBAcMBVBsYWNlMRQwEgYD\n" \
"VQQKDAtZb3VyQ29tcGFueTELMAkGA1UECwwCSVQxFjAUBgNVBAMMDXd3dy55b3Vy\n" \
"cy5jb20xITAfBgkqhkiG9w0BCQEWEnlvdXJFbWFpbEB5b3VyLmNvbTAgFw0yMDA2\n" \
"MjQyMDI4NTVaGA8yMTIwMDUzMTIwMjg1NVowgYoxCzAJBgNVBAYTAlVTMQswCQYD\n" \
"VQQIDAJXQTEOMAwGA1UEBwwFUGxhY2UxFDASBgNVBAoMC1lvdXJDb21wYW55MQsw\n" \
"CQYDVQQLDAJJVDEYMBYGA1UEAwwPd3d3LmV4YW1wbGUuY29tMSEwHwYJKoZIhvcN\n" \
"AQkBFhJ5b3VyRW1haWxAeW91ci5jb20wggEiMA0GCSqGSIb3DQEBAQUAA4IBDwAw\n" \
"ggEKAoIBAQDAsGVrxPkBnv4q691qbk82/vryAGq+KLANIKtwi7YI339MC0UP567I\n" \
"AHuXnrAVvy1lcJdMvwi+Q4Wxb92GCS/cxJrUZJ8ONLN312LPxRV0MO2eBatLi5YY\n" \
"r2Tmc1ayUBlV1uAYYixg0sTLdqzZYNYdOCrrBQhgvI4w3siLYPou9ZhPts8NJZVg\n" \
"gfGlpzmrqciWp+YFYkYax6DTGCfk4ZfjpzlDVls/5TEfBEsSzfZieCe3CeqeZJiK\n" \
"BIzirvT8Mvcb2fYRdfodR7p5/SCtZnvngEjfdXodTZAWWW3ECk9OnO3C5fJJE/4m\n" \
"YPJLToDkEHvGPEFYaJM97G/DL2DR4nwBAgMBAAEwDQYJKoZIhvcNAQELBQADggEB\n" \
"ACFGSPcc+v6RYV7v22z58ykpEatyFdotTcrzv+sVDiOebU16fUTX2EluLqMgUBjS\n" \
"w97kLETg5bmjvoJQdQoLQZ5ieV1WNNzfaCgkD5YwVUO0yHScRTCvPGQS5Qp4EAQI\n" \
"mxTpVVOFlTwOzmoIt2EQZ4eUFfksgDOpEQ/DFnS37RxY3zBBYFEuEEQWmY5bjIZl\n" \
"6SEgK9ZXTYwHJ2OL6WsRWc154MKShfZP5zapBAkDlI3F+VQqWqu7MFvR50R8yeKi\n" \
"H1RDkR1nZjLcxmQ/hcJlPvp1LuAcccGmRQtH2YSiM2N3E7BrDlkjL4P3f1E9kRQi\n" \
"q2lrQrl6/FMsIugW2e4HNu4=\n" \
"-----END CERTIFICATE-----"
#endif /* _DEMO_CREDENTIALS_H_ */
