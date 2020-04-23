/*
 *  Copyright (c) 2004-present, Facebook, Inc.
 *  All rights reserved.
 *
 *  This source code is licensed under the BSD-style license found in the
 *  LICENSE file in the root directory of this source tree. An additional grant
 *  of patent rights can be found in the PATENTS file in the same directory.
 *
 */

#include "fboss/agent/platforms/common/wedge400c/Wedge400CPlatformMapping.h"

namespace {
constexpr auto kJsonPlatformMappingStr = R"(
{
  "ports" : {
    "1": {
        "mapping": {
          "id": 1,
          "name": "eth1/1/1",
          "controllingPort": 1,
          "pins": [
            {
              "a": {
                "chip": "IFG10",
                "lane": 8
              },
              "z": {
                "end": {
                  "chip": "eth1/1",
                  "lane": 0
                }
              }
            },
            {
              "a": {
                "chip": "IFG10",
                "lane": 9
              },
              "z": {
                "end": {
                  "chip": "eth1/1",
                  "lane": 1
                }
              }
            },
            {
              "a": {
                "chip": "IFG10",
                "lane": 10
              },
              "z": {
                "end": {
                  "chip": "eth1/1",
                  "lane": 2
                }
              }
            },
            {
              "a": {
                "chip": "IFG10",
                "lane": 11
              },
              "z": {
                "end": {
                  "chip": "eth1/1",
                  "lane": 3
                }
              }
            },
            {
              "a": {
                "chip": "IFG10",
                "lane": 12
              },
              "z": {
                "end": {
                  "chip": "eth1/1",
                  "lane": 4
                }
              }
            },
            {
              "a": {
                "chip": "IFG10",
                "lane": 13
              },
              "z": {
                "end": {
                  "chip": "eth1/1",
                  "lane": 5
                }
              }
            },
            {
              "a": {
                "chip": "IFG10",
                "lane": 14
              },
              "z": {
                "end": {
                  "chip": "eth1/1",
                  "lane": 6
                }
              }
            },
            {
              "a": {
                "chip": "IFG10",
                "lane": 15
              },
              "z": {
                "end": {
                  "chip": "eth1/1",
                  "lane": 7
                }
              }
            }
          ]
         },
         "supportedProfiles": {
          "23": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "IFG10",
                      "lane": 8
                     }
                  },
                  {
                    "id": {
                      "chip": "IFG10",
                      "lane": 9
                     }
                  },
                  {
                    "id": {
                      "chip": "IFG10",
                      "lane": 10
                     }
                  },
                  {
                    "id": {
                      "chip": "IFG10",
                      "lane": 11
                     }
                  }
                 ],
                "transceiver": [
                  {
                   "id": {
                      "chip": "eth1/1",
                      "lane": 0
                    }
                  },
                  {
                   "id": {
                      "chip": "eth1/1",
                      "lane": 1
                    }
                  },
                  {
                   "id": {
                      "chip": "eth1/1",
                      "lane": 2
                    }
                  },
                  {
                   "id": {
                      "chip": "eth1/1",
                      "lane": 3
                    }
                  }
                 ]
               }
           },
          "25": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "IFG10",
                      "lane": 8
                     }
                  },
                  {
                    "id": {
                      "chip": "IFG10",
                      "lane": 9
                     }
                  },
                  {
                    "id": {
                      "chip": "IFG10",
                      "lane": 10
                     }
                  },
                  {
                    "id": {
                      "chip": "IFG10",
                      "lane": 11
                     }
                  }
                 ],
                "transceiver": [
                  {
                   "id": {
                      "chip": "eth1/1",
                      "lane": 0
                    }
                  },
                  {
                   "id": {
                      "chip": "eth1/1",
                      "lane": 1
                    }
                  },
                  {
                   "id": {
                      "chip": "eth1/1",
                      "lane": 2
                    }
                  },
                  {
                   "id": {
                      "chip": "eth1/1",
                      "lane": 3
                    }
                  }
                 ]
               }
           },
          "26": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "IFG10",
                      "lane": 8
                     }
                  },
                  {
                    "id": {
                      "chip": "IFG10",
                      "lane": 9
                     }
                  },
                  {
                    "id": {
                      "chip": "IFG10",
                      "lane": 10
                     }
                  },
                  {
                    "id": {
                      "chip": "IFG10",
                      "lane": 11
                     }
                  },
                  {
                    "id": {
                      "chip": "IFG10",
                      "lane": 12
                     }
                  },
                  {
                    "id": {
                      "chip": "IFG10",
                      "lane": 13
                     }
                  },
                  {
                    "id": {
                      "chip": "IFG10",
                      "lane": 14
                     }
                  },
                  {
                    "id": {
                      "chip": "IFG10",
                      "lane": 15
                     }
                  }
                 ],
                "transceiver": [
                  {
                   "id": {
                      "chip": "eth1/1",
                      "lane": 0
                    }
                  },
                  {
                   "id": {
                      "chip": "eth1/1",
                      "lane": 1
                    }
                  },
                  {
                   "id": {
                      "chip": "eth1/1",
                      "lane": 2
                    }
                  },
                  {
                   "id": {
                      "chip": "eth1/1",
                      "lane": 3
                    }
                  },
                  {
                   "id": {
                      "chip": "eth1/1",
                      "lane": 4
                    }
                  },
                  {
                   "id": {
                      "chip": "eth1/1",
                      "lane": 5
                    }
                  },
                  {
                   "id": {
                      "chip": "eth1/1",
                      "lane": 6
                    }
                  },
                  {
                   "id": {
                      "chip": "eth1/1",
                      "lane": 7
                    }
                  }
                 ]
               }
           }
         }
    },
    "9": {
        "mapping": {
          "id": 9,
          "name": "eth1/2/1",
          "controllingPort": 9,
          "pins": [
            {
              "a": {
                "chip": "IFG10",
                "lane": 16
              },
              "z": {
                "end": {
                  "chip": "eth1/2",
                  "lane": 0
                }
              }
            },
            {
              "a": {
                "chip": "IFG10",
                "lane": 17
              },
              "z": {
                "end": {
                  "chip": "eth1/2",
                  "lane": 1
                }
              }
            },
            {
              "a": {
                "chip": "IFG10",
                "lane": 18
              },
              "z": {
                "end": {
                  "chip": "eth1/2",
                  "lane": 2
                }
              }
            },
            {
              "a": {
                "chip": "IFG10",
                "lane": 19
              },
              "z": {
                "end": {
                  "chip": "eth1/2",
                  "lane": 3
                }
              }
            },
            {
              "a": {
                "chip": "IFG10",
                "lane": 20
              },
              "z": {
                "end": {
                  "chip": "eth1/2",
                  "lane": 4
                }
              }
            },
            {
              "a": {
                "chip": "IFG10",
                "lane": 21
              },
              "z": {
                "end": {
                  "chip": "eth1/2",
                  "lane": 5
                }
              }
            },
            {
              "a": {
                "chip": "IFG10",
                "lane": 22
              },
              "z": {
                "end": {
                  "chip": "eth1/2",
                  "lane": 6
                }
              }
            },
            {
              "a": {
                "chip": "IFG10",
                "lane": 23
              },
              "z": {
                "end": {
                  "chip": "eth1/2",
                  "lane": 7
                }
              }
            }
          ]
         },
         "supportedProfiles": {
          "23": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "IFG10",
                      "lane": 16
                     }
                  },
                  {
                    "id": {
                      "chip": "IFG10",
                      "lane": 17
                     }
                  },
                  {
                    "id": {
                      "chip": "IFG10",
                      "lane": 18
                     }
                  },
                  {
                    "id": {
                      "chip": "IFG10",
                      "lane": 19
                     }
                  }
                 ],
                "transceiver": [
                  {
                   "id": {
                      "chip": "eth1/2",
                      "lane": 0
                    }
                  },
                  {
                   "id": {
                      "chip": "eth1/2",
                      "lane": 1
                    }
                  },
                  {
                   "id": {
                      "chip": "eth1/2",
                      "lane": 2
                    }
                  },
                  {
                   "id": {
                      "chip": "eth1/2",
                      "lane": 3
                    }
                  }
                 ]
               }
           },
          "25": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "IFG10",
                      "lane": 16
                     }
                  },
                  {
                    "id": {
                      "chip": "IFG10",
                      "lane": 17
                     }
                  },
                  {
                    "id": {
                      "chip": "IFG10",
                      "lane": 18
                     }
                  },
                  {
                    "id": {
                      "chip": "IFG10",
                      "lane": 19
                     }
                  }
                 ],
                "transceiver": [
                  {
                   "id": {
                      "chip": "eth1/2",
                      "lane": 0
                    }
                  },
                  {
                   "id": {
                      "chip": "eth1/2",
                      "lane": 1
                    }
                  },
                  {
                   "id": {
                      "chip": "eth1/2",
                      "lane": 2
                    }
                  },
                  {
                   "id": {
                      "chip": "eth1/2",
                      "lane": 3
                    }
                  }
                 ]
               }
           },
          "26": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "IFG10",
                      "lane": 16
                     }
                  },
                  {
                    "id": {
                      "chip": "IFG10",
                      "lane": 17
                     }
                  },
                  {
                    "id": {
                      "chip": "IFG10",
                      "lane": 18
                     }
                  },
                  {
                    "id": {
                      "chip": "IFG10",
                      "lane": 19
                     }
                  },
                  {
                    "id": {
                      "chip": "IFG10",
                      "lane": 20
                     }
                  },
                  {
                    "id": {
                      "chip": "IFG10",
                      "lane": 21
                     }
                  },
                  {
                    "id": {
                      "chip": "IFG10",
                      "lane": 22
                     }
                  },
                  {
                    "id": {
                      "chip": "IFG10",
                      "lane": 23
                     }
                  }
                 ],
                "transceiver": [
                  {
                   "id": {
                      "chip": "eth1/2",
                      "lane": 0
                    }
                  },
                  {
                   "id": {
                      "chip": "eth1/2",
                      "lane": 1
                    }
                  },
                  {
                   "id": {
                      "chip": "eth1/2",
                      "lane": 2
                    }
                  },
                  {
                   "id": {
                      "chip": "eth1/2",
                      "lane": 3
                    }
                  },
                  {
                   "id": {
                      "chip": "eth1/2",
                      "lane": 4
                    }
                  },
                  {
                   "id": {
                      "chip": "eth1/2",
                      "lane": 5
                    }
                  },
                  {
                   "id": {
                      "chip": "eth1/2",
                      "lane": 6
                    }
                  },
                  {
                   "id": {
                      "chip": "eth1/2",
                      "lane": 7
                    }
                  }
                 ]
               }
           }
         }
    },
    "17": {
        "mapping": {
          "id": 17,
          "name": "eth1/3/1",
          "controllingPort": 17,
          "pins": [
            {
              "a": {
                "chip": "IFG9",
                "lane": 8
              },
              "z": {
                "end": {
                  "chip": "eth1/3",
                  "lane": 0
                }
              }
            },
            {
              "a": {
                "chip": "IFG9",
                "lane": 9
              },
              "z": {
                "end": {
                  "chip": "eth1/3",
                  "lane": 1
                }
              }
            },
            {
              "a": {
                "chip": "IFG9",
                "lane": 10
              },
              "z": {
                "end": {
                  "chip": "eth1/3",
                  "lane": 2
                }
              }
            },
            {
              "a": {
                "chip": "IFG9",
                "lane": 11
              },
              "z": {
                "end": {
                  "chip": "eth1/3",
                  "lane": 3
                }
              }
            },
            {
              "a": {
                "chip": "IFG9",
                "lane": 12
              },
              "z": {
                "end": {
                  "chip": "eth1/3",
                  "lane": 4
                }
              }
            },
            {
              "a": {
                "chip": "IFG9",
                "lane": 13
              },
              "z": {
                "end": {
                  "chip": "eth1/3",
                  "lane": 5
                }
              }
            },
            {
              "a": {
                "chip": "IFG9",
                "lane": 14
              },
              "z": {
                "end": {
                  "chip": "eth1/3",
                  "lane": 6
                }
              }
            },
            {
              "a": {
                "chip": "IFG9",
                "lane": 15
              },
              "z": {
                "end": {
                  "chip": "eth1/3",
                  "lane": 7
                }
              }
            }
          ]
         },
         "supportedProfiles": {
          "23": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "IFG9",
                      "lane": 8
                     }
                  },
                  {
                    "id": {
                      "chip": "IFG9",
                      "lane": 9
                     }
                  },
                  {
                    "id": {
                      "chip": "IFG9",
                      "lane": 10
                     }
                  },
                  {
                    "id": {
                      "chip": "IFG9",
                      "lane": 11
                     }
                  }
                 ],
                "transceiver": [
                  {
                   "id": {
                      "chip": "eth1/3",
                      "lane": 0
                    }
                  },
                  {
                   "id": {
                      "chip": "eth1/3",
                      "lane": 1
                    }
                  },
                  {
                   "id": {
                      "chip": "eth1/3",
                      "lane": 2
                    }
                  },
                  {
                   "id": {
                      "chip": "eth1/3",
                      "lane": 3
                    }
                  }
                 ]
               }
           },
          "25": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "IFG9",
                      "lane": 8
                     }
                  },
                  {
                    "id": {
                      "chip": "IFG9",
                      "lane": 9
                     }
                  },
                  {
                    "id": {
                      "chip": "IFG9",
                      "lane": 10
                     }
                  },
                  {
                    "id": {
                      "chip": "IFG9",
                      "lane": 11
                     }
                  }
                 ],
                "transceiver": [
                  {
                   "id": {
                      "chip": "eth1/3",
                      "lane": 0
                    }
                  },
                  {
                   "id": {
                      "chip": "eth1/3",
                      "lane": 1
                    }
                  },
                  {
                   "id": {
                      "chip": "eth1/3",
                      "lane": 2
                    }
                  },
                  {
                   "id": {
                      "chip": "eth1/3",
                      "lane": 3
                    }
                  }
                 ]
               }
           },
          "26": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "IFG9",
                      "lane": 8
                     }
                  },
                  {
                    "id": {
                      "chip": "IFG9",
                      "lane": 9
                     }
                  },
                  {
                    "id": {
                      "chip": "IFG9",
                      "lane": 10
                     }
                  },
                  {
                    "id": {
                      "chip": "IFG9",
                      "lane": 11
                     }
                  },
                  {
                    "id": {
                      "chip": "IFG9",
                      "lane": 12
                     }
                  },
                  {
                    "id": {
                      "chip": "IFG9",
                      "lane": 13
                     }
                  },
                  {
                    "id": {
                      "chip": "IFG9",
                      "lane": 14
                     }
                  },
                  {
                    "id": {
                      "chip": "IFG9",
                      "lane": 15
                     }
                  }
                 ],
                "transceiver": [
                  {
                   "id": {
                      "chip": "eth1/3",
                      "lane": 0
                    }
                  },
                  {
                   "id": {
                      "chip": "eth1/3",
                      "lane": 1
                    }
                  },
                  {
                   "id": {
                      "chip": "eth1/3",
                      "lane": 2
                    }
                  },
                  {
                   "id": {
                      "chip": "eth1/3",
                      "lane": 3
                    }
                  },
                  {
                   "id": {
                      "chip": "eth1/3",
                      "lane": 4
                    }
                  },
                  {
                   "id": {
                      "chip": "eth1/3",
                      "lane": 5
                    }
                  },
                  {
                   "id": {
                      "chip": "eth1/3",
                      "lane": 6
                    }
                  },
                  {
                   "id": {
                      "chip": "eth1/3",
                      "lane": 7
                    }
                  }
                 ]
               }
           }
         }
    },
    "25": {
        "mapping": {
          "id": 25,
          "name": "eth1/4/1",
          "controllingPort": 25,
          "pins": [
            {
              "a": {
                "chip": "IFG8",
                "lane": 8
              },
              "z": {
                "end": {
                  "chip": "eth1/4",
                  "lane": 0
                }
              }
            },
            {
              "a": {
                "chip": "IFG8",
                "lane": 9
              },
              "z": {
                "end": {
                  "chip": "eth1/4",
                  "lane": 1
                }
              }
            },
            {
              "a": {
                "chip": "IFG8",
                "lane": 10
              },
              "z": {
                "end": {
                  "chip": "eth1/4",
                  "lane": 2
                }
              }
            },
            {
              "a": {
                "chip": "IFG8",
                "lane": 11
              },
              "z": {
                "end": {
                  "chip": "eth1/4",
                  "lane": 3
                }
              }
            },
            {
              "a": {
                "chip": "IFG8",
                "lane": 12
              },
              "z": {
                "end": {
                  "chip": "eth1/4",
                  "lane": 4
                }
              }
            },
            {
              "a": {
                "chip": "IFG8",
                "lane": 13
              },
              "z": {
                "end": {
                  "chip": "eth1/4",
                  "lane": 5
                }
              }
            },
            {
              "a": {
                "chip": "IFG8",
                "lane": 14
              },
              "z": {
                "end": {
                  "chip": "eth1/4",
                  "lane": 6
                }
              }
            },
            {
              "a": {
                "chip": "IFG8",
                "lane": 15
              },
              "z": {
                "end": {
                  "chip": "eth1/4",
                  "lane": 7
                }
              }
            }
          ]
         },
         "supportedProfiles": {
          "23": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "IFG8",
                      "lane": 8
                     }
                  },
                  {
                    "id": {
                      "chip": "IFG8",
                      "lane": 9
                     }
                  },
                  {
                    "id": {
                      "chip": "IFG8",
                      "lane": 10
                     }
                  },
                  {
                    "id": {
                      "chip": "IFG8",
                      "lane": 11
                     }
                  }
                 ],
                "transceiver": [
                  {
                   "id": {
                      "chip": "eth1/4",
                      "lane": 0
                    }
                  },
                  {
                   "id": {
                      "chip": "eth1/4",
                      "lane": 1
                    }
                  },
                  {
                   "id": {
                      "chip": "eth1/4",
                      "lane": 2
                    }
                  },
                  {
                   "id": {
                      "chip": "eth1/4",
                      "lane": 3
                    }
                  }
                 ]
               }
           },
          "25": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "IFG8",
                      "lane": 8
                     }
                  },
                  {
                    "id": {
                      "chip": "IFG8",
                      "lane": 9
                     }
                  },
                  {
                    "id": {
                      "chip": "IFG8",
                      "lane": 10
                     }
                  },
                  {
                    "id": {
                      "chip": "IFG8",
                      "lane": 11
                     }
                  }
                 ],
                "transceiver": [
                  {
                   "id": {
                      "chip": "eth1/4",
                      "lane": 0
                    }
                  },
                  {
                   "id": {
                      "chip": "eth1/4",
                      "lane": 1
                    }
                  },
                  {
                   "id": {
                      "chip": "eth1/4",
                      "lane": 2
                    }
                  },
                  {
                   "id": {
                      "chip": "eth1/4",
                      "lane": 3
                    }
                  }
                 ]
               }
           },
          "26": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "IFG8",
                      "lane": 8
                     }
                  },
                  {
                    "id": {
                      "chip": "IFG8",
                      "lane": 9
                     }
                  },
                  {
                    "id": {
                      "chip": "IFG8",
                      "lane": 10
                     }
                  },
                  {
                    "id": {
                      "chip": "IFG8",
                      "lane": 11
                     }
                  },
                  {
                    "id": {
                      "chip": "IFG8",
                      "lane": 12
                     }
                  },
                  {
                    "id": {
                      "chip": "IFG8",
                      "lane": 13
                     }
                  },
                  {
                    "id": {
                      "chip": "IFG8",
                      "lane": 14
                     }
                  },
                  {
                    "id": {
                      "chip": "IFG8",
                      "lane": 15
                     }
                  }
                 ],
                "transceiver": [
                  {
                   "id": {
                      "chip": "eth1/4",
                      "lane": 0
                    }
                  },
                  {
                   "id": {
                      "chip": "eth1/4",
                      "lane": 1
                    }
                  },
                  {
                   "id": {
                      "chip": "eth1/4",
                      "lane": 2
                    }
                  },
                  {
                   "id": {
                      "chip": "eth1/4",
                      "lane": 3
                    }
                  },
                  {
                   "id": {
                      "chip": "eth1/4",
                      "lane": 4
                    }
                  },
                  {
                   "id": {
                      "chip": "eth1/4",
                      "lane": 5
                    }
                  },
                  {
                   "id": {
                      "chip": "eth1/4",
                      "lane": 6
                    }
                  },
                  {
                   "id": {
                      "chip": "eth1/4",
                      "lane": 7
                    }
                  }
                 ]
               }
           }
         }
    },
    "33": {
        "mapping": {
          "id": 33,
          "name": "eth1/5/1",
          "controllingPort": 33,
          "pins": [
            {
              "a": {
                "chip": "IFG11",
                "lane": 0
              },
              "z": {
                "end": {
                  "chip": "eth1/5",
                  "lane": 0
                }
              }
            },
            {
              "a": {
                "chip": "IFG11",
                "lane": 1
              },
              "z": {
                "end": {
                  "chip": "eth1/5",
                  "lane": 1
                }
              }
            },
            {
              "a": {
                "chip": "IFG11",
                "lane": 2
              },
              "z": {
                "end": {
                  "chip": "eth1/5",
                  "lane": 2
                }
              }
            },
            {
              "a": {
                "chip": "IFG11",
                "lane": 3
              },
              "z": {
                "end": {
                  "chip": "eth1/5",
                  "lane": 3
                }
              }
            },
            {
              "a": {
                "chip": "IFG11",
                "lane": 4
              },
              "z": {
                "end": {
                  "chip": "eth1/5",
                  "lane": 4
                }
              }
            },
            {
              "a": {
                "chip": "IFG11",
                "lane": 5
              },
              "z": {
                "end": {
                  "chip": "eth1/5",
                  "lane": 5
                }
              }
            },
            {
              "a": {
                "chip": "IFG11",
                "lane": 6
              },
              "z": {
                "end": {
                  "chip": "eth1/5",
                  "lane": 6
                }
              }
            },
            {
              "a": {
                "chip": "IFG11",
                "lane": 7
              },
              "z": {
                "end": {
                  "chip": "eth1/5",
                  "lane": 7
                }
              }
            }
          ]
         },
         "supportedProfiles": {
          "23": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "IFG11",
                      "lane": 0
                     }
                  },
                  {
                    "id": {
                      "chip": "IFG11",
                      "lane": 1
                     }
                  },
                  {
                    "id": {
                      "chip": "IFG11",
                      "lane": 2
                     }
                  },
                  {
                    "id": {
                      "chip": "IFG11",
                      "lane": 3
                     }
                  }
                 ],
                "transceiver": [
                  {
                   "id": {
                      "chip": "eth1/5",
                      "lane": 0
                    }
                  },
                  {
                   "id": {
                      "chip": "eth1/5",
                      "lane": 1
                    }
                  },
                  {
                   "id": {
                      "chip": "eth1/5",
                      "lane": 2
                    }
                  },
                  {
                   "id": {
                      "chip": "eth1/5",
                      "lane": 3
                    }
                  }
                 ]
               }
           },
          "25": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "IFG11",
                      "lane": 0
                     }
                  },
                  {
                    "id": {
                      "chip": "IFG11",
                      "lane": 1
                     }
                  },
                  {
                    "id": {
                      "chip": "IFG11",
                      "lane": 2
                     }
                  },
                  {
                    "id": {
                      "chip": "IFG11",
                      "lane": 3
                     }
                  }
                 ],
                "transceiver": [
                  {
                   "id": {
                      "chip": "eth1/5",
                      "lane": 0
                    }
                  },
                  {
                   "id": {
                      "chip": "eth1/5",
                      "lane": 1
                    }
                  },
                  {
                   "id": {
                      "chip": "eth1/5",
                      "lane": 2
                    }
                  },
                  {
                   "id": {
                      "chip": "eth1/5",
                      "lane": 3
                    }
                  }
                 ]
               }
           },
          "26": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "IFG11",
                      "lane": 0
                     }
                  },
                  {
                    "id": {
                      "chip": "IFG11",
                      "lane": 1
                     }
                  },
                  {
                    "id": {
                      "chip": "IFG11",
                      "lane": 2
                     }
                  },
                  {
                    "id": {
                      "chip": "IFG11",
                      "lane": 3
                     }
                  },
                  {
                    "id": {
                      "chip": "IFG11",
                      "lane": 4
                     }
                  },
                  {
                    "id": {
                      "chip": "IFG11",
                      "lane": 5
                     }
                  },
                  {
                    "id": {
                      "chip": "IFG11",
                      "lane": 6
                     }
                  },
                  {
                    "id": {
                      "chip": "IFG11",
                      "lane": 7
                     }
                  }
                 ],
                "transceiver": [
                  {
                   "id": {
                      "chip": "eth1/5",
                      "lane": 0
                    }
                  },
                  {
                   "id": {
                      "chip": "eth1/5",
                      "lane": 1
                    }
                  },
                  {
                   "id": {
                      "chip": "eth1/5",
                      "lane": 2
                    }
                  },
                  {
                   "id": {
                      "chip": "eth1/5",
                      "lane": 3
                    }
                  },
                  {
                   "id": {
                      "chip": "eth1/5",
                      "lane": 4
                    }
                  },
                  {
                   "id": {
                      "chip": "eth1/5",
                      "lane": 5
                    }
                  },
                  {
                   "id": {
                      "chip": "eth1/5",
                      "lane": 6
                    }
                  },
                  {
                   "id": {
                      "chip": "eth1/5",
                      "lane": 7
                    }
                  }
                 ]
               }
           }
         }
    },
    "41": {
        "mapping": {
          "id": 41,
          "name": "eth1/6/1",
          "controllingPort": 41,
          "pins": [
            {
              "a": {
                "chip": "IFG11",
                "lane": 16
              },
              "z": {
                "end": {
                  "chip": "eth1/6",
                  "lane": 0
                }
              }
            },
            {
              "a": {
                "chip": "IFG11",
                "lane": 17
              },
              "z": {
                "end": {
                  "chip": "eth1/6",
                  "lane": 1
                }
              }
            },
            {
              "a": {
                "chip": "IFG11",
                "lane": 18
              },
              "z": {
                "end": {
                  "chip": "eth1/6",
                  "lane": 2
                }
              }
            },
            {
              "a": {
                "chip": "IFG11",
                "lane": 19
              },
              "z": {
                "end": {
                  "chip": "eth1/6",
                  "lane": 3
                }
              }
            },
            {
              "a": {
                "chip": "IFG11",
                "lane": 20
              },
              "z": {
                "end": {
                  "chip": "eth1/6",
                  "lane": 4
                }
              }
            },
            {
              "a": {
                "chip": "IFG11",
                "lane": 21
              },
              "z": {
                "end": {
                  "chip": "eth1/6",
                  "lane": 5
                }
              }
            },
            {
              "a": {
                "chip": "IFG11",
                "lane": 22
              },
              "z": {
                "end": {
                  "chip": "eth1/6",
                  "lane": 6
                }
              }
            },
            {
              "a": {
                "chip": "IFG11",
                "lane": 23
              },
              "z": {
                "end": {
                  "chip": "eth1/6",
                  "lane": 7
                }
              }
            }
          ]
         },
         "supportedProfiles": {
          "23": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "IFG11",
                      "lane": 16
                     }
                  },
                  {
                    "id": {
                      "chip": "IFG11",
                      "lane": 17
                     }
                  },
                  {
                    "id": {
                      "chip": "IFG11",
                      "lane": 18
                     }
                  },
                  {
                    "id": {
                      "chip": "IFG11",
                      "lane": 19
                     }
                  }
                 ],
                "transceiver": [
                  {
                   "id": {
                      "chip": "eth1/6",
                      "lane": 0
                    }
                  },
                  {
                   "id": {
                      "chip": "eth1/6",
                      "lane": 1
                    }
                  },
                  {
                   "id": {
                      "chip": "eth1/6",
                      "lane": 2
                    }
                  },
                  {
                   "id": {
                      "chip": "eth1/6",
                      "lane": 3
                    }
                  }
                 ]
               }
           },
          "25": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "IFG11",
                      "lane": 16
                     }
                  },
                  {
                    "id": {
                      "chip": "IFG11",
                      "lane": 17
                     }
                  },
                  {
                    "id": {
                      "chip": "IFG11",
                      "lane": 18
                     }
                  },
                  {
                    "id": {
                      "chip": "IFG11",
                      "lane": 19
                     }
                  }
                 ],
                "transceiver": [
                  {
                   "id": {
                      "chip": "eth1/6",
                      "lane": 0
                    }
                  },
                  {
                   "id": {
                      "chip": "eth1/6",
                      "lane": 1
                    }
                  },
                  {
                   "id": {
                      "chip": "eth1/6",
                      "lane": 2
                    }
                  },
                  {
                   "id": {
                      "chip": "eth1/6",
                      "lane": 3
                    }
                  }
                 ]
               }
           },
          "26": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "IFG11",
                      "lane": 16
                     }
                  },
                  {
                    "id": {
                      "chip": "IFG11",
                      "lane": 17
                     }
                  },
                  {
                    "id": {
                      "chip": "IFG11",
                      "lane": 18
                     }
                  },
                  {
                    "id": {
                      "chip": "IFG11",
                      "lane": 19
                     }
                  },
                  {
                    "id": {
                      "chip": "IFG11",
                      "lane": 20
                     }
                  },
                  {
                    "id": {
                      "chip": "IFG11",
                      "lane": 21
                     }
                  },
                  {
                    "id": {
                      "chip": "IFG11",
                      "lane": 22
                     }
                  },
                  {
                    "id": {
                      "chip": "IFG11",
                      "lane": 23
                     }
                  }
                 ],
                "transceiver": [
                  {
                   "id": {
                      "chip": "eth1/6",
                      "lane": 0
                    }
                  },
                  {
                   "id": {
                      "chip": "eth1/6",
                      "lane": 1
                    }
                  },
                  {
                   "id": {
                      "chip": "eth1/6",
                      "lane": 2
                    }
                  },
                  {
                   "id": {
                      "chip": "eth1/6",
                      "lane": 3
                    }
                  },
                  {
                   "id": {
                      "chip": "eth1/6",
                      "lane": 4
                    }
                  },
                  {
                   "id": {
                      "chip": "eth1/6",
                      "lane": 5
                    }
                  },
                  {
                   "id": {
                      "chip": "eth1/6",
                      "lane": 6
                    }
                  },
                  {
                   "id": {
                      "chip": "eth1/6",
                      "lane": 7
                    }
                  }
                 ]
               }
           }
         }
    },
    "49": {
        "mapping": {
          "id": 49,
          "name": "eth1/7/1",
          "controllingPort": 49,
          "pins": [
            {
              "a": {
                "chip": "IFG7",
                "lane": 8
              },
              "z": {
                "end": {
                  "chip": "eth1/7",
                  "lane": 0
                }
              }
            },
            {
              "a": {
                "chip": "IFG7",
                "lane": 9
              },
              "z": {
                "end": {
                  "chip": "eth1/7",
                  "lane": 1
                }
              }
            },
            {
              "a": {
                "chip": "IFG7",
                "lane": 10
              },
              "z": {
                "end": {
                  "chip": "eth1/7",
                  "lane": 2
                }
              }
            },
            {
              "a": {
                "chip": "IFG7",
                "lane": 11
              },
              "z": {
                "end": {
                  "chip": "eth1/7",
                  "lane": 3
                }
              }
            },
            {
              "a": {
                "chip": "IFG7",
                "lane": 12
              },
              "z": {
                "end": {
                  "chip": "eth1/7",
                  "lane": 4
                }
              }
            },
            {
              "a": {
                "chip": "IFG7",
                "lane": 13
              },
              "z": {
                "end": {
                  "chip": "eth1/7",
                  "lane": 5
                }
              }
            },
            {
              "a": {
                "chip": "IFG7",
                "lane": 14
              },
              "z": {
                "end": {
                  "chip": "eth1/7",
                  "lane": 6
                }
              }
            },
            {
              "a": {
                "chip": "IFG7",
                "lane": 15
              },
              "z": {
                "end": {
                  "chip": "eth1/7",
                  "lane": 7
                }
              }
            }
          ]
         },
         "supportedProfiles": {
          "23": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "IFG7",
                      "lane": 8
                     }
                  },
                  {
                    "id": {
                      "chip": "IFG7",
                      "lane": 9
                     }
                  },
                  {
                    "id": {
                      "chip": "IFG7",
                      "lane": 10
                     }
                  },
                  {
                    "id": {
                      "chip": "IFG7",
                      "lane": 11
                     }
                  }
                 ],
                "transceiver": [
                  {
                   "id": {
                      "chip": "eth1/7",
                      "lane": 0
                    }
                  },
                  {
                   "id": {
                      "chip": "eth1/7",
                      "lane": 1
                    }
                  },
                  {
                   "id": {
                      "chip": "eth1/7",
                      "lane": 2
                    }
                  },
                  {
                   "id": {
                      "chip": "eth1/7",
                      "lane": 3
                    }
                  }
                 ]
               }
           },
          "25": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "IFG7",
                      "lane": 8
                     }
                  },
                  {
                    "id": {
                      "chip": "IFG7",
                      "lane": 9
                     }
                  },
                  {
                    "id": {
                      "chip": "IFG7",
                      "lane": 10
                     }
                  },
                  {
                    "id": {
                      "chip": "IFG7",
                      "lane": 11
                     }
                  }
                 ],
                "transceiver": [
                  {
                   "id": {
                      "chip": "eth1/7",
                      "lane": 0
                    }
                  },
                  {
                   "id": {
                      "chip": "eth1/7",
                      "lane": 1
                    }
                  },
                  {
                   "id": {
                      "chip": "eth1/7",
                      "lane": 2
                    }
                  },
                  {
                   "id": {
                      "chip": "eth1/7",
                      "lane": 3
                    }
                  }
                 ]
               }
           },
          "26": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "IFG7",
                      "lane": 8
                     }
                  },
                  {
                    "id": {
                      "chip": "IFG7",
                      "lane": 9
                     }
                  },
                  {
                    "id": {
                      "chip": "IFG7",
                      "lane": 10
                     }
                  },
                  {
                    "id": {
                      "chip": "IFG7",
                      "lane": 11
                     }
                  },
                  {
                    "id": {
                      "chip": "IFG7",
                      "lane": 12
                     }
                  },
                  {
                    "id": {
                      "chip": "IFG7",
                      "lane": 13
                     }
                  },
                  {
                    "id": {
                      "chip": "IFG7",
                      "lane": 14
                     }
                  },
                  {
                    "id": {
                      "chip": "IFG7",
                      "lane": 15
                     }
                  }
                 ],
                "transceiver": [
                  {
                   "id": {
                      "chip": "eth1/7",
                      "lane": 0
                    }
                  },
                  {
                   "id": {
                      "chip": "eth1/7",
                      "lane": 1
                    }
                  },
                  {
                   "id": {
                      "chip": "eth1/7",
                      "lane": 2
                    }
                  },
                  {
                   "id": {
                      "chip": "eth1/7",
                      "lane": 3
                    }
                  },
                  {
                   "id": {
                      "chip": "eth1/7",
                      "lane": 4
                    }
                  },
                  {
                   "id": {
                      "chip": "eth1/7",
                      "lane": 5
                    }
                  },
                  {
                   "id": {
                      "chip": "eth1/7",
                      "lane": 6
                    }
                  },
                  {
                   "id": {
                      "chip": "eth1/7",
                      "lane": 7
                    }
                  }
                 ]
               }
           }
         }
    },
    "57": {
        "mapping": {
          "id": 57,
          "name": "eth1/8/1",
          "controllingPort": 57,
          "pins": [
            {
              "a": {
                "chip": "IFG6",
                "lane": 8
              },
              "z": {
                "end": {
                  "chip": "eth1/8",
                  "lane": 0
                }
              }
            },
            {
              "a": {
                "chip": "IFG6",
                "lane": 9
              },
              "z": {
                "end": {
                  "chip": "eth1/8",
                  "lane": 1
                }
              }
            },
            {
              "a": {
                "chip": "IFG6",
                "lane": 10
              },
              "z": {
                "end": {
                  "chip": "eth1/8",
                  "lane": 2
                }
              }
            },
            {
              "a": {
                "chip": "IFG6",
                "lane": 11
              },
              "z": {
                "end": {
                  "chip": "eth1/8",
                  "lane": 3
                }
              }
            },
            {
              "a": {
                "chip": "IFG6",
                "lane": 12
              },
              "z": {
                "end": {
                  "chip": "eth1/8",
                  "lane": 4
                }
              }
            },
            {
              "a": {
                "chip": "IFG6",
                "lane": 13
              },
              "z": {
                "end": {
                  "chip": "eth1/8",
                  "lane": 5
                }
              }
            },
            {
              "a": {
                "chip": "IFG6",
                "lane": 14
              },
              "z": {
                "end": {
                  "chip": "eth1/8",
                  "lane": 6
                }
              }
            },
            {
              "a": {
                "chip": "IFG6",
                "lane": 15
              },
              "z": {
                "end": {
                  "chip": "eth1/8",
                  "lane": 7
                }
              }
            }
          ]
         },
         "supportedProfiles": {
          "23": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "IFG6",
                      "lane": 8
                     }
                  },
                  {
                    "id": {
                      "chip": "IFG6",
                      "lane": 9
                     }
                  },
                  {
                    "id": {
                      "chip": "IFG6",
                      "lane": 10
                     }
                  },
                  {
                    "id": {
                      "chip": "IFG6",
                      "lane": 11
                     }
                  }
                 ],
                "transceiver": [
                  {
                   "id": {
                      "chip": "eth1/8",
                      "lane": 0
                    }
                  },
                  {
                   "id": {
                      "chip": "eth1/8",
                      "lane": 1
                    }
                  },
                  {
                   "id": {
                      "chip": "eth1/8",
                      "lane": 2
                    }
                  },
                  {
                   "id": {
                      "chip": "eth1/8",
                      "lane": 3
                    }
                  }
                 ]
               }
           },
          "25": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "IFG6",
                      "lane": 8
                     }
                  },
                  {
                    "id": {
                      "chip": "IFG6",
                      "lane": 9
                     }
                  },
                  {
                    "id": {
                      "chip": "IFG6",
                      "lane": 10
                     }
                  },
                  {
                    "id": {
                      "chip": "IFG6",
                      "lane": 11
                     }
                  }
                 ],
                "transceiver": [
                  {
                   "id": {
                      "chip": "eth1/8",
                      "lane": 0
                    }
                  },
                  {
                   "id": {
                      "chip": "eth1/8",
                      "lane": 1
                    }
                  },
                  {
                   "id": {
                      "chip": "eth1/8",
                      "lane": 2
                    }
                  },
                  {
                   "id": {
                      "chip": "eth1/8",
                      "lane": 3
                    }
                  }
                 ]
               }
           },
          "26": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "IFG6",
                      "lane": 8
                     }
                  },
                  {
                    "id": {
                      "chip": "IFG6",
                      "lane": 9
                     }
                  },
                  {
                    "id": {
                      "chip": "IFG6",
                      "lane": 10
                     }
                  },
                  {
                    "id": {
                      "chip": "IFG6",
                      "lane": 11
                     }
                  },
                  {
                    "id": {
                      "chip": "IFG6",
                      "lane": 12
                     }
                  },
                  {
                    "id": {
                      "chip": "IFG6",
                      "lane": 13
                     }
                  },
                  {
                    "id": {
                      "chip": "IFG6",
                      "lane": 14
                     }
                  },
                  {
                    "id": {
                      "chip": "IFG6",
                      "lane": 15
                     }
                  }
                 ],
                "transceiver": [
                  {
                   "id": {
                      "chip": "eth1/8",
                      "lane": 0
                    }
                  },
                  {
                   "id": {
                      "chip": "eth1/8",
                      "lane": 1
                    }
                  },
                  {
                   "id": {
                      "chip": "eth1/8",
                      "lane": 2
                    }
                  },
                  {
                   "id": {
                      "chip": "eth1/8",
                      "lane": 3
                    }
                  },
                  {
                   "id": {
                      "chip": "eth1/8",
                      "lane": 4
                    }
                  },
                  {
                   "id": {
                      "chip": "eth1/8",
                      "lane": 5
                    }
                  },
                  {
                   "id": {
                      "chip": "eth1/8",
                      "lane": 6
                    }
                  },
                  {
                   "id": {
                      "chip": "eth1/8",
                      "lane": 7
                    }
                  }
                 ]
               }
           }
         }
    },
    "65": {
        "mapping": {
          "id": 65,
          "name": "eth1/9/1",
          "controllingPort": 65,
          "pins": [
            {
              "a": {
                "chip": "IFG5",
                "lane": 16
              },
              "z": {
                "end": {
                  "chip": "eth1/9",
                  "lane": 0
                }
              }
            },
            {
              "a": {
                "chip": "IFG5",
                "lane": 17
              },
              "z": {
                "end": {
                  "chip": "eth1/9",
                  "lane": 1
                }
              }
            },
            {
              "a": {
                "chip": "IFG5",
                "lane": 18
              },
              "z": {
                "end": {
                  "chip": "eth1/9",
                  "lane": 2
                }
              }
            },
            {
              "a": {
                "chip": "IFG5",
                "lane": 19
              },
              "z": {
                "end": {
                  "chip": "eth1/9",
                  "lane": 3
                }
              }
            },
            {
              "a": {
                "chip": "IFG5",
                "lane": 20
              },
              "z": {
                "end": {
                  "chip": "eth1/9",
                  "lane": 4
                }
              }
            },
            {
              "a": {
                "chip": "IFG5",
                "lane": 21
              },
              "z": {
                "end": {
                  "chip": "eth1/9",
                  "lane": 5
                }
              }
            },
            {
              "a": {
                "chip": "IFG5",
                "lane": 22
              },
              "z": {
                "end": {
                  "chip": "eth1/9",
                  "lane": 6
                }
              }
            },
            {
              "a": {
                "chip": "IFG5",
                "lane": 23
              },
              "z": {
                "end": {
                  "chip": "eth1/9",
                  "lane": 7
                }
              }
            }
          ]
         },
         "supportedProfiles": {
          "23": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "IFG5",
                      "lane": 16
                     }
                  },
                  {
                    "id": {
                      "chip": "IFG5",
                      "lane": 17
                     }
                  },
                  {
                    "id": {
                      "chip": "IFG5",
                      "lane": 18
                     }
                  },
                  {
                    "id": {
                      "chip": "IFG5",
                      "lane": 19
                     }
                  }
                 ],
                "transceiver": [
                  {
                   "id": {
                      "chip": "eth1/9",
                      "lane": 0
                    }
                  },
                  {
                   "id": {
                      "chip": "eth1/9",
                      "lane": 1
                    }
                  },
                  {
                   "id": {
                      "chip": "eth1/9",
                      "lane": 2
                    }
                  },
                  {
                   "id": {
                      "chip": "eth1/9",
                      "lane": 3
                    }
                  }
                 ]
               }
           },
          "25": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "IFG5",
                      "lane": 16
                     }
                  },
                  {
                    "id": {
                      "chip": "IFG5",
                      "lane": 17
                     }
                  },
                  {
                    "id": {
                      "chip": "IFG5",
                      "lane": 18
                     }
                  },
                  {
                    "id": {
                      "chip": "IFG5",
                      "lane": 19
                     }
                  }
                 ],
                "transceiver": [
                  {
                   "id": {
                      "chip": "eth1/9",
                      "lane": 0
                    }
                  },
                  {
                   "id": {
                      "chip": "eth1/9",
                      "lane": 1
                    }
                  },
                  {
                   "id": {
                      "chip": "eth1/9",
                      "lane": 2
                    }
                  },
                  {
                   "id": {
                      "chip": "eth1/9",
                      "lane": 3
                    }
                  }
                 ]
               }
           },
          "26": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "IFG5",
                      "lane": 16
                     }
                  },
                  {
                    "id": {
                      "chip": "IFG5",
                      "lane": 17
                     }
                  },
                  {
                    "id": {
                      "chip": "IFG5",
                      "lane": 18
                     }
                  },
                  {
                    "id": {
                      "chip": "IFG5",
                      "lane": 19
                     }
                  },
                  {
                    "id": {
                      "chip": "IFG5",
                      "lane": 20
                     }
                  },
                  {
                    "id": {
                      "chip": "IFG5",
                      "lane": 21
                     }
                  },
                  {
                    "id": {
                      "chip": "IFG5",
                      "lane": 22
                     }
                  },
                  {
                    "id": {
                      "chip": "IFG5",
                      "lane": 23
                     }
                  }
                 ],
                "transceiver": [
                  {
                   "id": {
                      "chip": "eth1/9",
                      "lane": 0
                    }
                  },
                  {
                   "id": {
                      "chip": "eth1/9",
                      "lane": 1
                    }
                  },
                  {
                   "id": {
                      "chip": "eth1/9",
                      "lane": 2
                    }
                  },
                  {
                   "id": {
                      "chip": "eth1/9",
                      "lane": 3
                    }
                  },
                  {
                   "id": {
                      "chip": "eth1/9",
                      "lane": 4
                    }
                  },
                  {
                   "id": {
                      "chip": "eth1/9",
                      "lane": 5
                    }
                  },
                  {
                   "id": {
                      "chip": "eth1/9",
                      "lane": 6
                    }
                  },
                  {
                   "id": {
                      "chip": "eth1/9",
                      "lane": 7
                    }
                  }
                 ]
               }
           }
         }
    },
    "73": {
        "mapping": {
          "id": 73,
          "name": "eth1/10/1",
          "controllingPort": 73,
          "pins": [
            {
              "a": {
                "chip": "IFG5",
                "lane": 0
              },
              "z": {
                "end": {
                  "chip": "eth1/10",
                  "lane": 0
                }
              }
            },
            {
              "a": {
                "chip": "IFG5",
                "lane": 1
              },
              "z": {
                "end": {
                  "chip": "eth1/10",
                  "lane": 1
                }
              }
            },
            {
              "a": {
                "chip": "IFG5",
                "lane": 2
              },
              "z": {
                "end": {
                  "chip": "eth1/10",
                  "lane": 2
                }
              }
            },
            {
              "a": {
                "chip": "IFG5",
                "lane": 3
              },
              "z": {
                "end": {
                  "chip": "eth1/10",
                  "lane": 3
                }
              }
            },
            {
              "a": {
                "chip": "IFG5",
                "lane": 4
              },
              "z": {
                "end": {
                  "chip": "eth1/10",
                  "lane": 4
                }
              }
            },
            {
              "a": {
                "chip": "IFG5",
                "lane": 5
              },
              "z": {
                "end": {
                  "chip": "eth1/10",
                  "lane": 5
                }
              }
            },
            {
              "a": {
                "chip": "IFG5",
                "lane": 6
              },
              "z": {
                "end": {
                  "chip": "eth1/10",
                  "lane": 6
                }
              }
            },
            {
              "a": {
                "chip": "IFG5",
                "lane": 7
              },
              "z": {
                "end": {
                  "chip": "eth1/10",
                  "lane": 7
                }
              }
            }
          ]
         },
         "supportedProfiles": {
          "23": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "IFG5",
                      "lane": 0
                     }
                  },
                  {
                    "id": {
                      "chip": "IFG5",
                      "lane": 1
                     }
                  },
                  {
                    "id": {
                      "chip": "IFG5",
                      "lane": 2
                     }
                  },
                  {
                    "id": {
                      "chip": "IFG5",
                      "lane": 3
                     }
                  }
                 ],
                "transceiver": [
                  {
                   "id": {
                      "chip": "eth1/10",
                      "lane": 0
                    }
                  },
                  {
                   "id": {
                      "chip": "eth1/10",
                      "lane": 1
                    }
                  },
                  {
                   "id": {
                      "chip": "eth1/10",
                      "lane": 2
                    }
                  },
                  {
                   "id": {
                      "chip": "eth1/10",
                      "lane": 3
                    }
                  }
                 ]
               }
           },
          "25": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "IFG5",
                      "lane": 0
                     }
                  },
                  {
                    "id": {
                      "chip": "IFG5",
                      "lane": 1
                     }
                  },
                  {
                    "id": {
                      "chip": "IFG5",
                      "lane": 2
                     }
                  },
                  {
                    "id": {
                      "chip": "IFG5",
                      "lane": 3
                     }
                  }
                 ],
                "transceiver": [
                  {
                   "id": {
                      "chip": "eth1/10",
                      "lane": 0
                    }
                  },
                  {
                   "id": {
                      "chip": "eth1/10",
                      "lane": 1
                    }
                  },
                  {
                   "id": {
                      "chip": "eth1/10",
                      "lane": 2
                    }
                  },
                  {
                   "id": {
                      "chip": "eth1/10",
                      "lane": 3
                    }
                  }
                 ]
               }
           },
          "26": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "IFG5",
                      "lane": 0
                     }
                  },
                  {
                    "id": {
                      "chip": "IFG5",
                      "lane": 1
                     }
                  },
                  {
                    "id": {
                      "chip": "IFG5",
                      "lane": 2
                     }
                  },
                  {
                    "id": {
                      "chip": "IFG5",
                      "lane": 3
                     }
                  },
                  {
                    "id": {
                      "chip": "IFG5",
                      "lane": 4
                     }
                  },
                  {
                    "id": {
                      "chip": "IFG5",
                      "lane": 5
                     }
                  },
                  {
                    "id": {
                      "chip": "IFG5",
                      "lane": 6
                     }
                  },
                  {
                    "id": {
                      "chip": "IFG5",
                      "lane": 7
                     }
                  }
                 ],
                "transceiver": [
                  {
                   "id": {
                      "chip": "eth1/10",
                      "lane": 0
                    }
                  },
                  {
                   "id": {
                      "chip": "eth1/10",
                      "lane": 1
                    }
                  },
                  {
                   "id": {
                      "chip": "eth1/10",
                      "lane": 2
                    }
                  },
                  {
                   "id": {
                      "chip": "eth1/10",
                      "lane": 3
                    }
                  },
                  {
                   "id": {
                      "chip": "eth1/10",
                      "lane": 4
                    }
                  },
                  {
                   "id": {
                      "chip": "eth1/10",
                      "lane": 5
                    }
                  },
                  {
                   "id": {
                      "chip": "eth1/10",
                      "lane": 6
                    }
                  },
                  {
                   "id": {
                      "chip": "eth1/10",
                      "lane": 7
                    }
                  }
                 ]
               }
           }
         }
    },
    "81": {
        "mapping": {
          "id": 81,
          "name": "eth1/11/1",
          "controllingPort": 81,
          "pins": [
            {
              "a": {
                "chip": "IFG0",
                "lane": 16
              },
              "z": {
                "end": {
                  "chip": "eth1/11",
                  "lane": 0
                }
              }
            },
            {
              "a": {
                "chip": "IFG0",
                "lane": 17
              },
              "z": {
                "end": {
                  "chip": "eth1/11",
                  "lane": 1
                }
              }
            },
            {
              "a": {
                "chip": "IFG0",
                "lane": 18
              },
              "z": {
                "end": {
                  "chip": "eth1/11",
                  "lane": 2
                }
              }
            },
            {
              "a": {
                "chip": "IFG0",
                "lane": 19
              },
              "z": {
                "end": {
                  "chip": "eth1/11",
                  "lane": 3
                }
              }
            },
            {
              "a": {
                "chip": "IFG0",
                "lane": 20
              },
              "z": {
                "end": {
                  "chip": "eth1/11",
                  "lane": 4
                }
              }
            },
            {
              "a": {
                "chip": "IFG0",
                "lane": 21
              },
              "z": {
                "end": {
                  "chip": "eth1/11",
                  "lane": 5
                }
              }
            },
            {
              "a": {
                "chip": "IFG0",
                "lane": 22
              },
              "z": {
                "end": {
                  "chip": "eth1/11",
                  "lane": 6
                }
              }
            },
            {
              "a": {
                "chip": "IFG0",
                "lane": 23
              },
              "z": {
                "end": {
                  "chip": "eth1/11",
                  "lane": 7
                }
              }
            }
          ]
         },
         "supportedProfiles": {
          "23": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "IFG0",
                      "lane": 16
                     }
                  },
                  {
                    "id": {
                      "chip": "IFG0",
                      "lane": 17
                     }
                  },
                  {
                    "id": {
                      "chip": "IFG0",
                      "lane": 18
                     }
                  },
                  {
                    "id": {
                      "chip": "IFG0",
                      "lane": 19
                     }
                  }
                 ],
                "transceiver": [
                  {
                   "id": {
                      "chip": "eth1/11",
                      "lane": 0
                    }
                  },
                  {
                   "id": {
                      "chip": "eth1/11",
                      "lane": 1
                    }
                  },
                  {
                   "id": {
                      "chip": "eth1/11",
                      "lane": 2
                    }
                  },
                  {
                   "id": {
                      "chip": "eth1/11",
                      "lane": 3
                    }
                  }
                 ]
               }
           },
          "25": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "IFG0",
                      "lane": 16
                     }
                  },
                  {
                    "id": {
                      "chip": "IFG0",
                      "lane": 17
                     }
                  },
                  {
                    "id": {
                      "chip": "IFG0",
                      "lane": 18
                     }
                  },
                  {
                    "id": {
                      "chip": "IFG0",
                      "lane": 19
                     }
                  }
                 ],
                "transceiver": [
                  {
                   "id": {
                      "chip": "eth1/11",
                      "lane": 0
                    }
                  },
                  {
                   "id": {
                      "chip": "eth1/11",
                      "lane": 1
                    }
                  },
                  {
                   "id": {
                      "chip": "eth1/11",
                      "lane": 2
                    }
                  },
                  {
                   "id": {
                      "chip": "eth1/11",
                      "lane": 3
                    }
                  }
                 ]
               }
           },
          "26": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "IFG0",
                      "lane": 16
                     }
                  },
                  {
                    "id": {
                      "chip": "IFG0",
                      "lane": 17
                     }
                  },
                  {
                    "id": {
                      "chip": "IFG0",
                      "lane": 18
                     }
                  },
                  {
                    "id": {
                      "chip": "IFG0",
                      "lane": 19
                     }
                  },
                  {
                    "id": {
                      "chip": "IFG0",
                      "lane": 20
                     }
                  },
                  {
                    "id": {
                      "chip": "IFG0",
                      "lane": 21
                     }
                  },
                  {
                    "id": {
                      "chip": "IFG0",
                      "lane": 22
                     }
                  },
                  {
                    "id": {
                      "chip": "IFG0",
                      "lane": 23
                     }
                  }
                 ],
                "transceiver": [
                  {
                   "id": {
                      "chip": "eth1/11",
                      "lane": 0
                    }
                  },
                  {
                   "id": {
                      "chip": "eth1/11",
                      "lane": 1
                    }
                  },
                  {
                   "id": {
                      "chip": "eth1/11",
                      "lane": 2
                    }
                  },
                  {
                   "id": {
                      "chip": "eth1/11",
                      "lane": 3
                    }
                  },
                  {
                   "id": {
                      "chip": "eth1/11",
                      "lane": 4
                    }
                  },
                  {
                   "id": {
                      "chip": "eth1/11",
                      "lane": 5
                    }
                  },
                  {
                   "id": {
                      "chip": "eth1/11",
                      "lane": 6
                    }
                  },
                  {
                   "id": {
                      "chip": "eth1/11",
                      "lane": 7
                    }
                  }
                 ]
               }
           }
         }
    },
    "89": {
        "mapping": {
          "id": 89,
          "name": "eth1/12/1",
          "controllingPort": 89,
          "pins": [
            {
              "a": {
                "chip": "IFG0",
                "lane": 8
              },
              "z": {
                "end": {
                  "chip": "eth1/12",
                  "lane": 0
                }
              }
            },
            {
              "a": {
                "chip": "IFG0",
                "lane": 9
              },
              "z": {
                "end": {
                  "chip": "eth1/12",
                  "lane": 1
                }
              }
            },
            {
              "a": {
                "chip": "IFG0",
                "lane": 10
              },
              "z": {
                "end": {
                  "chip": "eth1/12",
                  "lane": 2
                }
              }
            },
            {
              "a": {
                "chip": "IFG0",
                "lane": 11
              },
              "z": {
                "end": {
                  "chip": "eth1/12",
                  "lane": 3
                }
              }
            },
            {
              "a": {
                "chip": "IFG0",
                "lane": 12
              },
              "z": {
                "end": {
                  "chip": "eth1/12",
                  "lane": 4
                }
              }
            },
            {
              "a": {
                "chip": "IFG0",
                "lane": 13
              },
              "z": {
                "end": {
                  "chip": "eth1/12",
                  "lane": 5
                }
              }
            },
            {
              "a": {
                "chip": "IFG0",
                "lane": 14
              },
              "z": {
                "end": {
                  "chip": "eth1/12",
                  "lane": 6
                }
              }
            },
            {
              "a": {
                "chip": "IFG0",
                "lane": 15
              },
              "z": {
                "end": {
                  "chip": "eth1/12",
                  "lane": 7
                }
              }
            }
          ]
         },
         "supportedProfiles": {
          "23": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "IFG0",
                      "lane": 8
                     }
                  },
                  {
                    "id": {
                      "chip": "IFG0",
                      "lane": 9
                     }
                  },
                  {
                    "id": {
                      "chip": "IFG0",
                      "lane": 10
                     }
                  },
                  {
                    "id": {
                      "chip": "IFG0",
                      "lane": 11
                     }
                  }
                 ],
                "transceiver": [
                  {
                   "id": {
                      "chip": "eth1/12",
                      "lane": 0
                    }
                  },
                  {
                   "id": {
                      "chip": "eth1/12",
                      "lane": 1
                    }
                  },
                  {
                   "id": {
                      "chip": "eth1/12",
                      "lane": 2
                    }
                  },
                  {
                   "id": {
                      "chip": "eth1/12",
                      "lane": 3
                    }
                  }
                 ]
               }
           },
          "25": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "IFG0",
                      "lane": 8
                     }
                  },
                  {
                    "id": {
                      "chip": "IFG0",
                      "lane": 9
                     }
                  },
                  {
                    "id": {
                      "chip": "IFG0",
                      "lane": 10
                     }
                  },
                  {
                    "id": {
                      "chip": "IFG0",
                      "lane": 11
                     }
                  }
                 ],
                "transceiver": [
                  {
                   "id": {
                      "chip": "eth1/12",
                      "lane": 0
                    }
                  },
                  {
                   "id": {
                      "chip": "eth1/12",
                      "lane": 1
                    }
                  },
                  {
                   "id": {
                      "chip": "eth1/12",
                      "lane": 2
                    }
                  },
                  {
                   "id": {
                      "chip": "eth1/12",
                      "lane": 3
                    }
                  }
                 ]
               }
           },
          "26": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "IFG0",
                      "lane": 8
                     }
                  },
                  {
                    "id": {
                      "chip": "IFG0",
                      "lane": 9
                     }
                  },
                  {
                    "id": {
                      "chip": "IFG0",
                      "lane": 10
                     }
                  },
                  {
                    "id": {
                      "chip": "IFG0",
                      "lane": 11
                     }
                  },
                  {
                    "id": {
                      "chip": "IFG0",
                      "lane": 12
                     }
                  },
                  {
                    "id": {
                      "chip": "IFG0",
                      "lane": 13
                     }
                  },
                  {
                    "id": {
                      "chip": "IFG0",
                      "lane": 14
                     }
                  },
                  {
                    "id": {
                      "chip": "IFG0",
                      "lane": 15
                     }
                  }
                 ],
                "transceiver": [
                  {
                   "id": {
                      "chip": "eth1/12",
                      "lane": 0
                    }
                  },
                  {
                   "id": {
                      "chip": "eth1/12",
                      "lane": 1
                    }
                  },
                  {
                   "id": {
                      "chip": "eth1/12",
                      "lane": 2
                    }
                  },
                  {
                   "id": {
                      "chip": "eth1/12",
                      "lane": 3
                    }
                  },
                  {
                   "id": {
                      "chip": "eth1/12",
                      "lane": 4
                    }
                  },
                  {
                   "id": {
                      "chip": "eth1/12",
                      "lane": 5
                    }
                  },
                  {
                   "id": {
                      "chip": "eth1/12",
                      "lane": 6
                    }
                  },
                  {
                   "id": {
                      "chip": "eth1/12",
                      "lane": 7
                    }
                  }
                 ]
               }
           }
         }
    },
    "97": {
        "mapping": {
          "id": 97,
          "name": "eth1/13/1",
          "controllingPort": 97,
          "pins": [
            {
              "a": {
                "chip": "IFG3",
                "lane": 0
              },
              "z": {
                "end": {
                  "chip": "eth1/13",
                  "lane": 0
                }
              }
            },
            {
              "a": {
                "chip": "IFG3",
                "lane": 1
              },
              "z": {
                "end": {
                  "chip": "eth1/13",
                  "lane": 1
                }
              }
            },
            {
              "a": {
                "chip": "IFG3",
                "lane": 2
              },
              "z": {
                "end": {
                  "chip": "eth1/13",
                  "lane": 2
                }
              }
            },
            {
              "a": {
                "chip": "IFG3",
                "lane": 3
              },
              "z": {
                "end": {
                  "chip": "eth1/13",
                  "lane": 3
                }
              }
            },
            {
              "a": {
                "chip": "IFG3",
                "lane": 4
              },
              "z": {
                "end": {
                  "chip": "eth1/13",
                  "lane": 4
                }
              }
            },
            {
              "a": {
                "chip": "IFG3",
                "lane": 5
              },
              "z": {
                "end": {
                  "chip": "eth1/13",
                  "lane": 5
                }
              }
            },
            {
              "a": {
                "chip": "IFG3",
                "lane": 6
              },
              "z": {
                "end": {
                  "chip": "eth1/13",
                  "lane": 6
                }
              }
            },
            {
              "a": {
                "chip": "IFG3",
                "lane": 7
              },
              "z": {
                "end": {
                  "chip": "eth1/13",
                  "lane": 7
                }
              }
            }
          ]
         },
         "supportedProfiles": {
          "23": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "IFG3",
                      "lane": 0
                     }
                  },
                  {
                    "id": {
                      "chip": "IFG3",
                      "lane": 1
                     }
                  },
                  {
                    "id": {
                      "chip": "IFG3",
                      "lane": 2
                     }
                  },
                  {
                    "id": {
                      "chip": "IFG3",
                      "lane": 3
                     }
                  }
                 ],
                "transceiver": [
                  {
                   "id": {
                      "chip": "eth1/13",
                      "lane": 0
                    }
                  },
                  {
                   "id": {
                      "chip": "eth1/13",
                      "lane": 1
                    }
                  },
                  {
                   "id": {
                      "chip": "eth1/13",
                      "lane": 2
                    }
                  },
                  {
                   "id": {
                      "chip": "eth1/13",
                      "lane": 3
                    }
                  }
                 ]
               }
           },
          "25": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "IFG3",
                      "lane": 0
                     }
                  },
                  {
                    "id": {
                      "chip": "IFG3",
                      "lane": 1
                     }
                  },
                  {
                    "id": {
                      "chip": "IFG3",
                      "lane": 2
                     }
                  },
                  {
                    "id": {
                      "chip": "IFG3",
                      "lane": 3
                     }
                  }
                 ],
                "transceiver": [
                  {
                   "id": {
                      "chip": "eth1/13",
                      "lane": 0
                    }
                  },
                  {
                   "id": {
                      "chip": "eth1/13",
                      "lane": 1
                    }
                  },
                  {
                   "id": {
                      "chip": "eth1/13",
                      "lane": 2
                    }
                  },
                  {
                   "id": {
                      "chip": "eth1/13",
                      "lane": 3
                    }
                  }
                 ]
               }
           },
          "26": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "IFG3",
                      "lane": 0
                     }
                  },
                  {
                    "id": {
                      "chip": "IFG3",
                      "lane": 1
                     }
                  },
                  {
                    "id": {
                      "chip": "IFG3",
                      "lane": 2
                     }
                  },
                  {
                    "id": {
                      "chip": "IFG3",
                      "lane": 3
                     }
                  },
                  {
                    "id": {
                      "chip": "IFG3",
                      "lane": 4
                     }
                  },
                  {
                    "id": {
                      "chip": "IFG3",
                      "lane": 5
                     }
                  },
                  {
                    "id": {
                      "chip": "IFG3",
                      "lane": 6
                     }
                  },
                  {
                    "id": {
                      "chip": "IFG3",
                      "lane": 7
                     }
                  }
                 ],
                "transceiver": [
                  {
                   "id": {
                      "chip": "eth1/13",
                      "lane": 0
                    }
                  },
                  {
                   "id": {
                      "chip": "eth1/13",
                      "lane": 1
                    }
                  },
                  {
                   "id": {
                      "chip": "eth1/13",
                      "lane": 2
                    }
                  },
                  {
                   "id": {
                      "chip": "eth1/13",
                      "lane": 3
                    }
                  },
                  {
                   "id": {
                      "chip": "eth1/13",
                      "lane": 4
                    }
                  },
                  {
                   "id": {
                      "chip": "eth1/13",
                      "lane": 5
                    }
                  },
                  {
                   "id": {
                      "chip": "eth1/13",
                      "lane": 6
                    }
                  },
                  {
                   "id": {
                      "chip": "eth1/13",
                      "lane": 7
                    }
                  }
                 ]
               }
           }
         }
    },
    "105": {
        "mapping": {
          "id": 105,
          "name": "eth1/14/1",
          "controllingPort": 105,
          "pins": [
            {
              "a": {
                "chip": "IFG2",
                "lane": 16
              },
              "z": {
                "end": {
                  "chip": "eth1/14",
                  "lane": 0
                }
              }
            },
            {
              "a": {
                "chip": "IFG2",
                "lane": 17
              },
              "z": {
                "end": {
                  "chip": "eth1/14",
                  "lane": 1
                }
              }
            },
            {
              "a": {
                "chip": "IFG2",
                "lane": 18
              },
              "z": {
                "end": {
                  "chip": "eth1/14",
                  "lane": 2
                }
              }
            },
            {
              "a": {
                "chip": "IFG2",
                "lane": 19
              },
              "z": {
                "end": {
                  "chip": "eth1/14",
                  "lane": 3
                }
              }
            },
            {
              "a": {
                "chip": "IFG2",
                "lane": 20
              },
              "z": {
                "end": {
                  "chip": "eth1/14",
                  "lane": 4
                }
              }
            },
            {
              "a": {
                "chip": "IFG2",
                "lane": 21
              },
              "z": {
                "end": {
                  "chip": "eth1/14",
                  "lane": 5
                }
              }
            },
            {
              "a": {
                "chip": "IFG2",
                "lane": 22
              },
              "z": {
                "end": {
                  "chip": "eth1/14",
                  "lane": 6
                }
              }
            },
            {
              "a": {
                "chip": "IFG2",
                "lane": 23
              },
              "z": {
                "end": {
                  "chip": "eth1/14",
                  "lane": 7
                }
              }
            }
          ]
         },
         "supportedProfiles": {
          "23": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "IFG2",
                      "lane": 16
                     }
                  },
                  {
                    "id": {
                      "chip": "IFG2",
                      "lane": 17
                     }
                  },
                  {
                    "id": {
                      "chip": "IFG2",
                      "lane": 18
                     }
                  },
                  {
                    "id": {
                      "chip": "IFG2",
                      "lane": 19
                     }
                  }
                 ],
                "transceiver": [
                  {
                   "id": {
                      "chip": "eth1/14",
                      "lane": 0
                    }
                  },
                  {
                   "id": {
                      "chip": "eth1/14",
                      "lane": 1
                    }
                  },
                  {
                   "id": {
                      "chip": "eth1/14",
                      "lane": 2
                    }
                  },
                  {
                   "id": {
                      "chip": "eth1/14",
                      "lane": 3
                    }
                  }
                 ]
               }
           },
          "25": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "IFG2",
                      "lane": 16
                     }
                  },
                  {
                    "id": {
                      "chip": "IFG2",
                      "lane": 17
                     }
                  },
                  {
                    "id": {
                      "chip": "IFG2",
                      "lane": 18
                     }
                  },
                  {
                    "id": {
                      "chip": "IFG2",
                      "lane": 19
                     }
                  }
                 ],
                "transceiver": [
                  {
                   "id": {
                      "chip": "eth1/14",
                      "lane": 0
                    }
                  },
                  {
                   "id": {
                      "chip": "eth1/14",
                      "lane": 1
                    }
                  },
                  {
                   "id": {
                      "chip": "eth1/14",
                      "lane": 2
                    }
                  },
                  {
                   "id": {
                      "chip": "eth1/14",
                      "lane": 3
                    }
                  }
                 ]
               }
           },
          "26": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "IFG2",
                      "lane": 16
                     }
                  },
                  {
                    "id": {
                      "chip": "IFG2",
                      "lane": 17
                     }
                  },
                  {
                    "id": {
                      "chip": "IFG2",
                      "lane": 18
                     }
                  },
                  {
                    "id": {
                      "chip": "IFG2",
                      "lane": 19
                     }
                  },
                  {
                    "id": {
                      "chip": "IFG2",
                      "lane": 20
                     }
                  },
                  {
                    "id": {
                      "chip": "IFG2",
                      "lane": 21
                     }
                  },
                  {
                    "id": {
                      "chip": "IFG2",
                      "lane": 22
                     }
                  },
                  {
                    "id": {
                      "chip": "IFG2",
                      "lane": 23
                     }
                  }
                 ],
                "transceiver": [
                  {
                   "id": {
                      "chip": "eth1/14",
                      "lane": 0
                    }
                  },
                  {
                   "id": {
                      "chip": "eth1/14",
                      "lane": 1
                    }
                  },
                  {
                   "id": {
                      "chip": "eth1/14",
                      "lane": 2
                    }
                  },
                  {
                   "id": {
                      "chip": "eth1/14",
                      "lane": 3
                    }
                  },
                  {
                   "id": {
                      "chip": "eth1/14",
                      "lane": 4
                    }
                  },
                  {
                   "id": {
                      "chip": "eth1/14",
                      "lane": 5
                    }
                  },
                  {
                   "id": {
                      "chip": "eth1/14",
                      "lane": 6
                    }
                  },
                  {
                   "id": {
                      "chip": "eth1/14",
                      "lane": 7
                    }
                  }
                 ]
               }
           }
         }
    },
    "113": {
        "mapping": {
          "id": 113,
          "name": "eth1/15/1",
          "controllingPort": 113,
          "pins": [
            {
              "a": {
                "chip": "IFG1",
                "lane": 16
              },
              "z": {
                "end": {
                  "chip": "eth1/15",
                  "lane": 0
                }
              }
            },
            {
              "a": {
                "chip": "IFG1",
                "lane": 17
              },
              "z": {
                "end": {
                  "chip": "eth1/15",
                  "lane": 1
                }
              }
            },
            {
              "a": {
                "chip": "IFG1",
                "lane": 18
              },
              "z": {
                "end": {
                  "chip": "eth1/15",
                  "lane": 2
                }
              }
            },
            {
              "a": {
                "chip": "IFG1",
                "lane": 19
              },
              "z": {
                "end": {
                  "chip": "eth1/15",
                  "lane": 3
                }
              }
            },
            {
              "a": {
                "chip": "IFG1",
                "lane": 20
              },
              "z": {
                "end": {
                  "chip": "eth1/15",
                  "lane": 4
                }
              }
            },
            {
              "a": {
                "chip": "IFG1",
                "lane": 21
              },
              "z": {
                "end": {
                  "chip": "eth1/15",
                  "lane": 5
                }
              }
            },
            {
              "a": {
                "chip": "IFG1",
                "lane": 22
              },
              "z": {
                "end": {
                  "chip": "eth1/15",
                  "lane": 6
                }
              }
            },
            {
              "a": {
                "chip": "IFG1",
                "lane": 23
              },
              "z": {
                "end": {
                  "chip": "eth1/15",
                  "lane": 7
                }
              }
            }
          ]
         },
         "supportedProfiles": {
          "23": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "IFG1",
                      "lane": 16
                     }
                  },
                  {
                    "id": {
                      "chip": "IFG1",
                      "lane": 17
                     }
                  },
                  {
                    "id": {
                      "chip": "IFG1",
                      "lane": 18
                     }
                  },
                  {
                    "id": {
                      "chip": "IFG1",
                      "lane": 19
                     }
                  }
                 ],
                "transceiver": [
                  {
                   "id": {
                      "chip": "eth1/15",
                      "lane": 0
                    }
                  },
                  {
                   "id": {
                      "chip": "eth1/15",
                      "lane": 1
                    }
                  },
                  {
                   "id": {
                      "chip": "eth1/15",
                      "lane": 2
                    }
                  },
                  {
                   "id": {
                      "chip": "eth1/15",
                      "lane": 3
                    }
                  }
                 ]
               }
           },
          "25": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "IFG1",
                      "lane": 16
                     }
                  },
                  {
                    "id": {
                      "chip": "IFG1",
                      "lane": 17
                     }
                  },
                  {
                    "id": {
                      "chip": "IFG1",
                      "lane": 18
                     }
                  },
                  {
                    "id": {
                      "chip": "IFG1",
                      "lane": 19
                     }
                  }
                 ],
                "transceiver": [
                  {
                   "id": {
                      "chip": "eth1/15",
                      "lane": 0
                    }
                  },
                  {
                   "id": {
                      "chip": "eth1/15",
                      "lane": 1
                    }
                  },
                  {
                   "id": {
                      "chip": "eth1/15",
                      "lane": 2
                    }
                  },
                  {
                   "id": {
                      "chip": "eth1/15",
                      "lane": 3
                    }
                  }
                 ]
               }
           },
          "26": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "IFG1",
                      "lane": 16
                     }
                  },
                  {
                    "id": {
                      "chip": "IFG1",
                      "lane": 17
                     }
                  },
                  {
                    "id": {
                      "chip": "IFG1",
                      "lane": 18
                     }
                  },
                  {
                    "id": {
                      "chip": "IFG1",
                      "lane": 19
                     }
                  },
                  {
                    "id": {
                      "chip": "IFG1",
                      "lane": 20
                     }
                  },
                  {
                    "id": {
                      "chip": "IFG1",
                      "lane": 21
                     }
                  },
                  {
                    "id": {
                      "chip": "IFG1",
                      "lane": 22
                     }
                  },
                  {
                    "id": {
                      "chip": "IFG1",
                      "lane": 23
                     }
                  }
                 ],
                "transceiver": [
                  {
                   "id": {
                      "chip": "eth1/15",
                      "lane": 0
                    }
                  },
                  {
                   "id": {
                      "chip": "eth1/15",
                      "lane": 1
                    }
                  },
                  {
                   "id": {
                      "chip": "eth1/15",
                      "lane": 2
                    }
                  },
                  {
                   "id": {
                      "chip": "eth1/15",
                      "lane": 3
                    }
                  },
                  {
                   "id": {
                      "chip": "eth1/15",
                      "lane": 4
                    }
                  },
                  {
                   "id": {
                      "chip": "eth1/15",
                      "lane": 5
                    }
                  },
                  {
                   "id": {
                      "chip": "eth1/15",
                      "lane": 6
                    }
                  },
                  {
                   "id": {
                      "chip": "eth1/15",
                      "lane": 7
                    }
                  }
                 ]
               }
           }
         }
    },
    "121": {
        "mapping": {
          "id": 121,
          "name": "eth1/16/1",
          "controllingPort": 121,
          "pins": [
            {
              "a": {
                "chip": "IFG1",
                "lane": 0
              },
              "z": {
                "end": {
                  "chip": "eth1/16",
                  "lane": 0
                }
              }
            },
            {
              "a": {
                "chip": "IFG1",
                "lane": 1
              },
              "z": {
                "end": {
                  "chip": "eth1/16",
                  "lane": 1
                }
              }
            },
            {
              "a": {
                "chip": "IFG1",
                "lane": 2
              },
              "z": {
                "end": {
                  "chip": "eth1/16",
                  "lane": 2
                }
              }
            },
            {
              "a": {
                "chip": "IFG1",
                "lane": 3
              },
              "z": {
                "end": {
                  "chip": "eth1/16",
                  "lane": 3
                }
              }
            },
            {
              "a": {
                "chip": "IFG1",
                "lane": 4
              },
              "z": {
                "end": {
                  "chip": "eth1/16",
                  "lane": 4
                }
              }
            },
            {
              "a": {
                "chip": "IFG1",
                "lane": 5
              },
              "z": {
                "end": {
                  "chip": "eth1/16",
                  "lane": 5
                }
              }
            },
            {
              "a": {
                "chip": "IFG1",
                "lane": 6
              },
              "z": {
                "end": {
                  "chip": "eth1/16",
                  "lane": 6
                }
              }
            },
            {
              "a": {
                "chip": "IFG1",
                "lane": 7
              },
              "z": {
                "end": {
                  "chip": "eth1/16",
                  "lane": 7
                }
              }
            }
          ]
         },
         "supportedProfiles": {
          "23": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "IFG1",
                      "lane": 0
                     }
                  },
                  {
                    "id": {
                      "chip": "IFG1",
                      "lane": 1
                     }
                  },
                  {
                    "id": {
                      "chip": "IFG1",
                      "lane": 2
                     }
                  },
                  {
                    "id": {
                      "chip": "IFG1",
                      "lane": 3
                     }
                  }
                 ],
                "transceiver": [
                  {
                   "id": {
                      "chip": "eth1/16",
                      "lane": 0
                    }
                  },
                  {
                   "id": {
                      "chip": "eth1/16",
                      "lane": 1
                    }
                  },
                  {
                   "id": {
                      "chip": "eth1/16",
                      "lane": 2
                    }
                  },
                  {
                   "id": {
                      "chip": "eth1/16",
                      "lane": 3
                    }
                  }
                 ]
               }
           },
          "25": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "IFG1",
                      "lane": 0
                     }
                  },
                  {
                    "id": {
                      "chip": "IFG1",
                      "lane": 1
                     }
                  },
                  {
                    "id": {
                      "chip": "IFG1",
                      "lane": 2
                     }
                  },
                  {
                    "id": {
                      "chip": "IFG1",
                      "lane": 3
                     }
                  }
                 ],
                "transceiver": [
                  {
                   "id": {
                      "chip": "eth1/16",
                      "lane": 0
                    }
                  },
                  {
                   "id": {
                      "chip": "eth1/16",
                      "lane": 1
                    }
                  },
                  {
                   "id": {
                      "chip": "eth1/16",
                      "lane": 2
                    }
                  },
                  {
                   "id": {
                      "chip": "eth1/16",
                      "lane": 3
                    }
                  }
                 ]
               }
           },
          "26": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "IFG1",
                      "lane": 0
                     }
                  },
                  {
                    "id": {
                      "chip": "IFG1",
                      "lane": 1
                     }
                  },
                  {
                    "id": {
                      "chip": "IFG1",
                      "lane": 2
                     }
                  },
                  {
                    "id": {
                      "chip": "IFG1",
                      "lane": 3
                     }
                  },
                  {
                    "id": {
                      "chip": "IFG1",
                      "lane": 4
                     }
                  },
                  {
                    "id": {
                      "chip": "IFG1",
                      "lane": 5
                     }
                  },
                  {
                    "id": {
                      "chip": "IFG1",
                      "lane": 6
                     }
                  },
                  {
                    "id": {
                      "chip": "IFG1",
                      "lane": 7
                     }
                  }
                 ],
                "transceiver": [
                  {
                   "id": {
                      "chip": "eth1/16",
                      "lane": 0
                    }
                  },
                  {
                   "id": {
                      "chip": "eth1/16",
                      "lane": 1
                    }
                  },
                  {
                   "id": {
                      "chip": "eth1/16",
                      "lane": 2
                    }
                  },
                  {
                   "id": {
                      "chip": "eth1/16",
                      "lane": 3
                    }
                  },
                  {
                   "id": {
                      "chip": "eth1/16",
                      "lane": 4
                    }
                  },
                  {
                   "id": {
                      "chip": "eth1/16",
                      "lane": 5
                    }
                  },
                  {
                   "id": {
                      "chip": "eth1/16",
                      "lane": 6
                    }
                  },
                  {
                   "id": {
                      "chip": "eth1/16",
                      "lane": 7
                    }
                  }
                 ]
               }
           }
         }
    },
    "129": {
        "mapping": {
          "id": 129,
          "name": "eth1/17/1",
          "controllingPort": 129,
          "pins": [
            {
              "a": {
                "chip": "IFG10",
                "lane": 4
              },
              "z": {
                "end": {
                  "chip": "eth1/17",
                  "lane": 0
                }
              }
            }
          ]
         },
         "supportedProfiles": {
          "11": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "IFG10",
                      "lane": 4
                     }
                  }
                 ],
                "transceiver": [
                  {
                   "id": {
                      "chip": "eth1/17",
                      "lane": 0
                    }
                  }
                 ]
               }
           },
          "14": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "IFG10",
                      "lane": 4
                     }
                  }
                 ],
                "transceiver": [
                  {
                   "id": {
                      "chip": "eth1/17",
                      "lane": 0
                    }
                  }
                 ]
               }
           },
          "17": {
              "subsumedPorts": [
                130,
                131,
                132
              ],
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "IFG10",
                      "lane": 4
                     }
                  },
                  {
                    "id": {
                      "chip": "IFG10",
                      "lane": 5
                     }
                  },
                  {
                    "id": {
                      "chip": "IFG10",
                      "lane": 6
                     }
                  },
                  {
                    "id": {
                      "chip": "IFG10",
                      "lane": 7
                     }
                  }
                 ],
                "transceiver": [
                  {
                   "id": {
                      "chip": "eth1/17",
                      "lane": 0
                    }
                  },
                  {
                   "id": {
                      "chip": "eth1/17",
                      "lane": 1
                    }
                  },
                  {
                   "id": {
                      "chip": "eth1/17",
                      "lane": 2
                    }
                  },
                  {
                   "id": {
                      "chip": "eth1/17",
                      "lane": 3
                    }
                  }
                 ]
               }
           },
          "19": {
              "subsumedPorts": [
                130
              ],
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "IFG10",
                      "lane": 4
                     }
                  },
                  {
                    "id": {
                      "chip": "IFG10",
                      "lane": 5
                     }
                  }
                 ],
                "transceiver": [
                  {
                   "id": {
                      "chip": "eth1/17",
                      "lane": 0
                    }
                  },
                  {
                   "id": {
                      "chip": "eth1/17",
                      "lane": 1
                    }
                  }
                 ]
               }
           },
          "22": {
              "subsumedPorts": [
                130,
                131,
                132
              ],
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "IFG10",
                      "lane": 4
                     }
                  },
                  {
                    "id": {
                      "chip": "IFG10",
                      "lane": 5
                     }
                  },
                  {
                    "id": {
                      "chip": "IFG10",
                      "lane": 6
                     }
                  },
                  {
                    "id": {
                      "chip": "IFG10",
                      "lane": 7
                     }
                  }
                 ],
                "transceiver": [
                  {
                   "id": {
                      "chip": "eth1/17",
                      "lane": 0
                    }
                  },
                  {
                   "id": {
                      "chip": "eth1/17",
                      "lane": 1
                    }
                  },
                  {
                   "id": {
                      "chip": "eth1/17",
                      "lane": 2
                    }
                  },
                  {
                   "id": {
                      "chip": "eth1/17",
                      "lane": 3
                    }
                  }
                 ]
               }
           },
          "24": {
              "subsumedPorts": [
                130,
                131,
                132
              ],
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "IFG10",
                      "lane": 4
                     }
                  },
                  {
                    "id": {
                      "chip": "IFG10",
                      "lane": 5
                     }
                  },
                  {
                    "id": {
                      "chip": "IFG10",
                      "lane": 6
                     }
                  },
                  {
                    "id": {
                      "chip": "IFG10",
                      "lane": 7
                     }
                  }
                 ],
                "transceiver": [
                  {
                   "id": {
                      "chip": "eth1/17",
                      "lane": 0
                    }
                  },
                  {
                   "id": {
                      "chip": "eth1/17",
                      "lane": 1
                    }
                  },
                  {
                   "id": {
                      "chip": "eth1/17",
                      "lane": 2
                    }
                  },
                  {
                   "id": {
                      "chip": "eth1/17",
                      "lane": 3
                    }
                  }
                 ]
               }
           }
         }
    },
    "130": {
        "mapping": {
          "id": 130,
          "name": "eth1/17/2",
          "controllingPort": 129,
          "pins": [
            {
              "a": {
                "chip": "IFG10",
                "lane": 5
              },
              "z": {
                "end": {
                  "chip": "eth1/17",
                  "lane": 1
                }
              }
            }
          ]
         },
         "supportedProfiles": {
          "11": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "IFG10",
                      "lane": 5
                     }
                  }
                 ],
                "transceiver": [
                  {
                   "id": {
                      "chip": "eth1/17",
                      "lane": 1
                    }
                  }
                 ]
               }
           },
          "14": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "IFG10",
                      "lane": 5
                     }
                  }
                 ],
                "transceiver": [
                  {
                   "id": {
                      "chip": "eth1/17",
                      "lane": 1
                    }
                  }
                 ]
               }
           }
         }
    },
    "131": {
        "mapping": {
          "id": 131,
          "name": "eth1/17/3",
          "controllingPort": 129,
          "pins": [
            {
              "a": {
                "chip": "IFG10",
                "lane": 6
              },
              "z": {
                "end": {
                  "chip": "eth1/17",
                  "lane": 2
                }
              }
            }
          ]
         },
         "supportedProfiles": {
          "11": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "IFG10",
                      "lane": 6
                     }
                  }
                 ],
                "transceiver": [
                  {
                   "id": {
                      "chip": "eth1/17",
                      "lane": 2
                    }
                  }
                 ]
               }
           },
          "14": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "IFG10",
                      "lane": 6
                     }
                  }
                 ],
                "transceiver": [
                  {
                   "id": {
                      "chip": "eth1/17",
                      "lane": 2
                    }
                  }
                 ]
               }
           },
          "19": {
              "subsumedPorts": [
                132
              ],
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "IFG10",
                      "lane": 6
                     }
                  },
                  {
                    "id": {
                      "chip": "IFG10",
                      "lane": 7
                     }
                  }
                 ],
                "transceiver": [
                  {
                   "id": {
                      "chip": "eth1/17",
                      "lane": 2
                    }
                  },
                  {
                   "id": {
                      "chip": "eth1/17",
                      "lane": 3
                    }
                  }
                 ]
               }
           }
         }
    },
    "132": {
        "mapping": {
          "id": 132,
          "name": "eth1/17/4",
          "controllingPort": 129,
          "pins": [
            {
              "a": {
                "chip": "IFG10",
                "lane": 7
              },
              "z": {
                "end": {
                  "chip": "eth1/17",
                  "lane": 3
                }
              }
            }
          ]
         },
         "supportedProfiles": {
          "11": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "IFG10",
                      "lane": 7
                     }
                  }
                 ],
                "transceiver": [
                  {
                   "id": {
                      "chip": "eth1/17",
                      "lane": 3
                    }
                  }
                 ]
               }
           },
          "14": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "IFG10",
                      "lane": 7
                     }
                  }
                 ],
                "transceiver": [
                  {
                   "id": {
                      "chip": "eth1/17",
                      "lane": 3
                    }
                  }
                 ]
               }
           }
         }
    },
    "133": {
        "mapping": {
          "id": 133,
          "name": "eth1/17/1",
          "controllingPort": 133,
          "pins": [
            {
              "a": {
                "chip": "IFG10",
                "lane": 0
              },
              "z": {
                "end": {
                  "chip": "eth1/17",
                  "lane": 0
                }
              }
            }
          ]
         },
         "supportedProfiles": {
          "11": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "IFG10",
                      "lane": 0
                     }
                  }
                 ],
                "transceiver": [
                  {
                   "id": {
                      "chip": "eth1/17",
                      "lane": 0
                    }
                  }
                 ]
               }
           },
          "14": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "IFG10",
                      "lane": 0
                     }
                  }
                 ],
                "transceiver": [
                  {
                   "id": {
                      "chip": "eth1/17",
                      "lane": 0
                    }
                  }
                 ]
               }
           },
          "17": {
              "subsumedPorts": [
                134,
                135,
                136
              ],
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "IFG10",
                      "lane": 0
                     }
                  },
                  {
                    "id": {
                      "chip": "IFG10",
                      "lane": 1
                     }
                  },
                  {
                    "id": {
                      "chip": "IFG10",
                      "lane": 2
                     }
                  },
                  {
                    "id": {
                      "chip": "IFG10",
                      "lane": 3
                     }
                  }
                 ],
                "transceiver": [
                  {
                   "id": {
                      "chip": "eth1/17",
                      "lane": 0
                    }
                  },
                  {
                   "id": {
                      "chip": "eth1/17",
                      "lane": 1
                    }
                  },
                  {
                   "id": {
                      "chip": "eth1/17",
                      "lane": 2
                    }
                  },
                  {
                   "id": {
                      "chip": "eth1/17",
                      "lane": 3
                    }
                  }
                 ]
               }
           },
          "19": {
              "subsumedPorts": [
                134
              ],
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "IFG10",
                      "lane": 0
                     }
                  },
                  {
                    "id": {
                      "chip": "IFG10",
                      "lane": 1
                     }
                  }
                 ],
                "transceiver": [
                  {
                   "id": {
                      "chip": "eth1/17",
                      "lane": 0
                    }
                  },
                  {
                   "id": {
                      "chip": "eth1/17",
                      "lane": 1
                    }
                  }
                 ]
               }
           },
          "22": {
              "subsumedPorts": [
                134,
                135,
                136
              ],
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "IFG10",
                      "lane": 0
                     }
                  },
                  {
                    "id": {
                      "chip": "IFG10",
                      "lane": 1
                     }
                  },
                  {
                    "id": {
                      "chip": "IFG10",
                      "lane": 2
                     }
                  },
                  {
                    "id": {
                      "chip": "IFG10",
                      "lane": 3
                     }
                  }
                 ],
                "transceiver": [
                  {
                   "id": {
                      "chip": "eth1/17",
                      "lane": 0
                    }
                  },
                  {
                   "id": {
                      "chip": "eth1/17",
                      "lane": 1
                    }
                  },
                  {
                   "id": {
                      "chip": "eth1/17",
                      "lane": 2
                    }
                  },
                  {
                   "id": {
                      "chip": "eth1/17",
                      "lane": 3
                    }
                  }
                 ]
               }
           },
          "24": {
              "subsumedPorts": [
                134,
                135,
                136
              ],
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "IFG10",
                      "lane": 0
                     }
                  },
                  {
                    "id": {
                      "chip": "IFG10",
                      "lane": 1
                     }
                  },
                  {
                    "id": {
                      "chip": "IFG10",
                      "lane": 2
                     }
                  },
                  {
                    "id": {
                      "chip": "IFG10",
                      "lane": 3
                     }
                  }
                 ],
                "transceiver": [
                  {
                   "id": {
                      "chip": "eth1/17",
                      "lane": 0
                    }
                  },
                  {
                   "id": {
                      "chip": "eth1/17",
                      "lane": 1
                    }
                  },
                  {
                   "id": {
                      "chip": "eth1/17",
                      "lane": 2
                    }
                  },
                  {
                   "id": {
                      "chip": "eth1/17",
                      "lane": 3
                    }
                  }
                 ]
               }
           }
         }
    },
    "134": {
        "mapping": {
          "id": 134,
          "name": "eth1/17/2",
          "controllingPort": 133,
          "pins": [
            {
              "a": {
                "chip": "IFG10",
                "lane": 1
              },
              "z": {
                "end": {
                  "chip": "eth1/17",
                  "lane": 1
                }
              }
            }
          ]
         },
         "supportedProfiles": {
          "11": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "IFG10",
                      "lane": 1
                     }
                  }
                 ],
                "transceiver": [
                  {
                   "id": {
                      "chip": "eth1/17",
                      "lane": 1
                    }
                  }
                 ]
               }
           },
          "14": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "IFG10",
                      "lane": 1
                     }
                  }
                 ],
                "transceiver": [
                  {
                   "id": {
                      "chip": "eth1/17",
                      "lane": 1
                    }
                  }
                 ]
               }
           }
         }
    },
    "135": {
        "mapping": {
          "id": 135,
          "name": "eth1/17/3",
          "controllingPort": 133,
          "pins": [
            {
              "a": {
                "chip": "IFG10",
                "lane": 2
              },
              "z": {
                "end": {
                  "chip": "eth1/17",
                  "lane": 2
                }
              }
            }
          ]
         },
         "supportedProfiles": {
          "11": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "IFG10",
                      "lane": 2
                     }
                  }
                 ],
                "transceiver": [
                  {
                   "id": {
                      "chip": "eth1/17",
                      "lane": 2
                    }
                  }
                 ]
               }
           },
          "14": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "IFG10",
                      "lane": 2
                     }
                  }
                 ],
                "transceiver": [
                  {
                   "id": {
                      "chip": "eth1/17",
                      "lane": 2
                    }
                  }
                 ]
               }
           },
          "19": {
              "subsumedPorts": [
                136
              ],
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "IFG10",
                      "lane": 2
                     }
                  },
                  {
                    "id": {
                      "chip": "IFG10",
                      "lane": 3
                     }
                  }
                 ],
                "transceiver": [
                  {
                   "id": {
                      "chip": "eth1/17",
                      "lane": 2
                    }
                  },
                  {
                   "id": {
                      "chip": "eth1/17",
                      "lane": 3
                    }
                  }
                 ]
               }
           }
         }
    },
    "136": {
        "mapping": {
          "id": 136,
          "name": "eth1/17/4",
          "controllingPort": 133,
          "pins": [
            {
              "a": {
                "chip": "IFG10",
                "lane": 3
              },
              "z": {
                "end": {
                  "chip": "eth1/17",
                  "lane": 3
                }
              }
            }
          ]
         },
         "supportedProfiles": {
          "11": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "IFG10",
                      "lane": 3
                     }
                  }
                 ],
                "transceiver": [
                  {
                   "id": {
                      "chip": "eth1/17",
                      "lane": 3
                    }
                  }
                 ]
               }
           },
          "14": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "IFG10",
                      "lane": 3
                     }
                  }
                 ],
                "transceiver": [
                  {
                   "id": {
                      "chip": "eth1/17",
                      "lane": 3
                    }
                  }
                 ]
               }
           }
         }
    },
    "137": {
        "mapping": {
          "id": 137,
          "name": "eth1/18/1",
          "controllingPort": 137,
          "pins": [
            {
              "a": {
                "chip": "IFG9",
                "lane": 4
              },
              "z": {
                "end": {
                  "chip": "eth1/18",
                  "lane": 0
                }
              }
            }
          ]
         },
         "supportedProfiles": {
          "11": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "IFG9",
                      "lane": 4
                     }
                  }
                 ],
                "transceiver": [
                  {
                   "id": {
                      "chip": "eth1/18",
                      "lane": 0
                    }
                  }
                 ]
               }
           },
          "14": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "IFG9",
                      "lane": 4
                     }
                  }
                 ],
                "transceiver": [
                  {
                   "id": {
                      "chip": "eth1/18",
                      "lane": 0
                    }
                  }
                 ]
               }
           },
          "17": {
              "subsumedPorts": [
                138,
                139,
                140
              ],
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "IFG9",
                      "lane": 4
                     }
                  },
                  {
                    "id": {
                      "chip": "IFG9",
                      "lane": 5
                     }
                  },
                  {
                    "id": {
                      "chip": "IFG9",
                      "lane": 6
                     }
                  },
                  {
                    "id": {
                      "chip": "IFG9",
                      "lane": 7
                     }
                  }
                 ],
                "transceiver": [
                  {
                   "id": {
                      "chip": "eth1/18",
                      "lane": 0
                    }
                  },
                  {
                   "id": {
                      "chip": "eth1/18",
                      "lane": 1
                    }
                  },
                  {
                   "id": {
                      "chip": "eth1/18",
                      "lane": 2
                    }
                  },
                  {
                   "id": {
                      "chip": "eth1/18",
                      "lane": 3
                    }
                  }
                 ]
               }
           },
          "19": {
              "subsumedPorts": [
                138
              ],
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "IFG9",
                      "lane": 4
                     }
                  },
                  {
                    "id": {
                      "chip": "IFG9",
                      "lane": 5
                     }
                  }
                 ],
                "transceiver": [
                  {
                   "id": {
                      "chip": "eth1/18",
                      "lane": 0
                    }
                  },
                  {
                   "id": {
                      "chip": "eth1/18",
                      "lane": 1
                    }
                  }
                 ]
               }
           },
          "22": {
              "subsumedPorts": [
                138,
                139,
                140
              ],
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "IFG9",
                      "lane": 4
                     }
                  },
                  {
                    "id": {
                      "chip": "IFG9",
                      "lane": 5
                     }
                  },
                  {
                    "id": {
                      "chip": "IFG9",
                      "lane": 6
                     }
                  },
                  {
                    "id": {
                      "chip": "IFG9",
                      "lane": 7
                     }
                  }
                 ],
                "transceiver": [
                  {
                   "id": {
                      "chip": "eth1/18",
                      "lane": 0
                    }
                  },
                  {
                   "id": {
                      "chip": "eth1/18",
                      "lane": 1
                    }
                  },
                  {
                   "id": {
                      "chip": "eth1/18",
                      "lane": 2
                    }
                  },
                  {
                   "id": {
                      "chip": "eth1/18",
                      "lane": 3
                    }
                  }
                 ]
               }
           },
          "24": {
              "subsumedPorts": [
                138,
                139,
                140
              ],
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "IFG9",
                      "lane": 4
                     }
                  },
                  {
                    "id": {
                      "chip": "IFG9",
                      "lane": 5
                     }
                  },
                  {
                    "id": {
                      "chip": "IFG9",
                      "lane": 6
                     }
                  },
                  {
                    "id": {
                      "chip": "IFG9",
                      "lane": 7
                     }
                  }
                 ],
                "transceiver": [
                  {
                   "id": {
                      "chip": "eth1/18",
                      "lane": 0
                    }
                  },
                  {
                   "id": {
                      "chip": "eth1/18",
                      "lane": 1
                    }
                  },
                  {
                   "id": {
                      "chip": "eth1/18",
                      "lane": 2
                    }
                  },
                  {
                   "id": {
                      "chip": "eth1/18",
                      "lane": 3
                    }
                  }
                 ]
               }
           }
         }
    },
    "138": {
        "mapping": {
          "id": 138,
          "name": "eth1/18/2",
          "controllingPort": 137,
          "pins": [
            {
              "a": {
                "chip": "IFG9",
                "lane": 5
              },
              "z": {
                "end": {
                  "chip": "eth1/18",
                  "lane": 1
                }
              }
            }
          ]
         },
         "supportedProfiles": {
          "11": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "IFG9",
                      "lane": 5
                     }
                  }
                 ],
                "transceiver": [
                  {
                   "id": {
                      "chip": "eth1/18",
                      "lane": 1
                    }
                  }
                 ]
               }
           },
          "14": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "IFG9",
                      "lane": 5
                     }
                  }
                 ],
                "transceiver": [
                  {
                   "id": {
                      "chip": "eth1/18",
                      "lane": 1
                    }
                  }
                 ]
               }
           }
         }
    },
    "139": {
        "mapping": {
          "id": 139,
          "name": "eth1/18/3",
          "controllingPort": 137,
          "pins": [
            {
              "a": {
                "chip": "IFG9",
                "lane": 6
              },
              "z": {
                "end": {
                  "chip": "eth1/18",
                  "lane": 2
                }
              }
            }
          ]
         },
         "supportedProfiles": {
          "11": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "IFG9",
                      "lane": 6
                     }
                  }
                 ],
                "transceiver": [
                  {
                   "id": {
                      "chip": "eth1/18",
                      "lane": 2
                    }
                  }
                 ]
               }
           },
          "14": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "IFG9",
                      "lane": 6
                     }
                  }
                 ],
                "transceiver": [
                  {
                   "id": {
                      "chip": "eth1/18",
                      "lane": 2
                    }
                  }
                 ]
               }
           },
          "19": {
              "subsumedPorts": [
                140
              ],
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "IFG9",
                      "lane": 6
                     }
                  },
                  {
                    "id": {
                      "chip": "IFG9",
                      "lane": 7
                     }
                  }
                 ],
                "transceiver": [
                  {
                   "id": {
                      "chip": "eth1/18",
                      "lane": 2
                    }
                  },
                  {
                   "id": {
                      "chip": "eth1/18",
                      "lane": 3
                    }
                  }
                 ]
               }
           }
         }
    },
    "140": {
        "mapping": {
          "id": 140,
          "name": "eth1/18/4",
          "controllingPort": 137,
          "pins": [
            {
              "a": {
                "chip": "IFG9",
                "lane": 7
              },
              "z": {
                "end": {
                  "chip": "eth1/18",
                  "lane": 3
                }
              }
            }
          ]
         },
         "supportedProfiles": {
          "11": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "IFG9",
                      "lane": 7
                     }
                  }
                 ],
                "transceiver": [
                  {
                   "id": {
                      "chip": "eth1/18",
                      "lane": 3
                    }
                  }
                 ]
               }
           },
          "14": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "IFG9",
                      "lane": 7
                     }
                  }
                 ],
                "transceiver": [
                  {
                   "id": {
                      "chip": "eth1/18",
                      "lane": 3
                    }
                  }
                 ]
               }
           }
         }
    },
    "141": {
        "mapping": {
          "id": 141,
          "name": "eth1/18/1",
          "controllingPort": 141,
          "pins": [
            {
              "a": {
                "chip": "IFG9",
                "lane": 0
              },
              "z": {
                "end": {
                  "chip": "eth1/18",
                  "lane": 0
                }
              }
            }
          ]
         },
         "supportedProfiles": {
          "11": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "IFG9",
                      "lane": 0
                     }
                  }
                 ],
                "transceiver": [
                  {
                   "id": {
                      "chip": "eth1/18",
                      "lane": 0
                    }
                  }
                 ]
               }
           },
          "14": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "IFG9",
                      "lane": 0
                     }
                  }
                 ],
                "transceiver": [
                  {
                   "id": {
                      "chip": "eth1/18",
                      "lane": 0
                    }
                  }
                 ]
               }
           },
          "17": {
              "subsumedPorts": [
                142,
                143,
                144
              ],
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "IFG9",
                      "lane": 0
                     }
                  },
                  {
                    "id": {
                      "chip": "IFG9",
                      "lane": 1
                     }
                  },
                  {
                    "id": {
                      "chip": "IFG9",
                      "lane": 2
                     }
                  },
                  {
                    "id": {
                      "chip": "IFG9",
                      "lane": 3
                     }
                  }
                 ],
                "transceiver": [
                  {
                   "id": {
                      "chip": "eth1/18",
                      "lane": 0
                    }
                  },
                  {
                   "id": {
                      "chip": "eth1/18",
                      "lane": 1
                    }
                  },
                  {
                   "id": {
                      "chip": "eth1/18",
                      "lane": 2
                    }
                  },
                  {
                   "id": {
                      "chip": "eth1/18",
                      "lane": 3
                    }
                  }
                 ]
               }
           },
          "19": {
              "subsumedPorts": [
                142
              ],
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "IFG9",
                      "lane": 0
                     }
                  },
                  {
                    "id": {
                      "chip": "IFG9",
                      "lane": 1
                     }
                  }
                 ],
                "transceiver": [
                  {
                   "id": {
                      "chip": "eth1/18",
                      "lane": 0
                    }
                  },
                  {
                   "id": {
                      "chip": "eth1/18",
                      "lane": 1
                    }
                  }
                 ]
               }
           },
          "22": {
              "subsumedPorts": [
                142,
                143,
                144
              ],
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "IFG9",
                      "lane": 0
                     }
                  },
                  {
                    "id": {
                      "chip": "IFG9",
                      "lane": 1
                     }
                  },
                  {
                    "id": {
                      "chip": "IFG9",
                      "lane": 2
                     }
                  },
                  {
                    "id": {
                      "chip": "IFG9",
                      "lane": 3
                     }
                  }
                 ],
                "transceiver": [
                  {
                   "id": {
                      "chip": "eth1/18",
                      "lane": 0
                    }
                  },
                  {
                   "id": {
                      "chip": "eth1/18",
                      "lane": 1
                    }
                  },
                  {
                   "id": {
                      "chip": "eth1/18",
                      "lane": 2
                    }
                  },
                  {
                   "id": {
                      "chip": "eth1/18",
                      "lane": 3
                    }
                  }
                 ]
               }
           },
          "24": {
              "subsumedPorts": [
                142,
                143,
                144
              ],
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "IFG9",
                      "lane": 0
                     }
                  },
                  {
                    "id": {
                      "chip": "IFG9",
                      "lane": 1
                     }
                  },
                  {
                    "id": {
                      "chip": "IFG9",
                      "lane": 2
                     }
                  },
                  {
                    "id": {
                      "chip": "IFG9",
                      "lane": 3
                     }
                  }
                 ],
                "transceiver": [
                  {
                   "id": {
                      "chip": "eth1/18",
                      "lane": 0
                    }
                  },
                  {
                   "id": {
                      "chip": "eth1/18",
                      "lane": 1
                    }
                  },
                  {
                   "id": {
                      "chip": "eth1/18",
                      "lane": 2
                    }
                  },
                  {
                   "id": {
                      "chip": "eth1/18",
                      "lane": 3
                    }
                  }
                 ]
               }
           }
         }
    },
    "142": {
        "mapping": {
          "id": 142,
          "name": "eth1/18/2",
          "controllingPort": 141,
          "pins": [
            {
              "a": {
                "chip": "IFG9",
                "lane": 1
              },
              "z": {
                "end": {
                  "chip": "eth1/18",
                  "lane": 1
                }
              }
            }
          ]
         },
         "supportedProfiles": {
          "11": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "IFG9",
                      "lane": 1
                     }
                  }
                 ],
                "transceiver": [
                  {
                   "id": {
                      "chip": "eth1/18",
                      "lane": 1
                    }
                  }
                 ]
               }
           },
          "14": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "IFG9",
                      "lane": 1
                     }
                  }
                 ],
                "transceiver": [
                  {
                   "id": {
                      "chip": "eth1/18",
                      "lane": 1
                    }
                  }
                 ]
               }
           }
         }
    },
    "143": {
        "mapping": {
          "id": 143,
          "name": "eth1/18/3",
          "controllingPort": 141,
          "pins": [
            {
              "a": {
                "chip": "IFG9",
                "lane": 2
              },
              "z": {
                "end": {
                  "chip": "eth1/18",
                  "lane": 2
                }
              }
            }
          ]
         },
         "supportedProfiles": {
          "11": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "IFG9",
                      "lane": 2
                     }
                  }
                 ],
                "transceiver": [
                  {
                   "id": {
                      "chip": "eth1/18",
                      "lane": 2
                    }
                  }
                 ]
               }
           },
          "14": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "IFG9",
                      "lane": 2
                     }
                  }
                 ],
                "transceiver": [
                  {
                   "id": {
                      "chip": "eth1/18",
                      "lane": 2
                    }
                  }
                 ]
               }
           },
          "19": {
              "subsumedPorts": [
                144
              ],
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "IFG9",
                      "lane": 2
                     }
                  },
                  {
                    "id": {
                      "chip": "IFG9",
                      "lane": 3
                     }
                  }
                 ],
                "transceiver": [
                  {
                   "id": {
                      "chip": "eth1/18",
                      "lane": 2
                    }
                  },
                  {
                   "id": {
                      "chip": "eth1/18",
                      "lane": 3
                    }
                  }
                 ]
               }
           }
         }
    },
    "144": {
        "mapping": {
          "id": 144,
          "name": "eth1/18/4",
          "controllingPort": 141,
          "pins": [
            {
              "a": {
                "chip": "IFG9",
                "lane": 3
              },
              "z": {
                "end": {
                  "chip": "eth1/18",
                  "lane": 3
                }
              }
            }
          ]
         },
         "supportedProfiles": {
          "11": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "IFG9",
                      "lane": 3
                     }
                  }
                 ],
                "transceiver": [
                  {
                   "id": {
                      "chip": "eth1/18",
                      "lane": 3
                    }
                  }
                 ]
               }
           },
          "14": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "IFG9",
                      "lane": 3
                     }
                  }
                 ],
                "transceiver": [
                  {
                   "id": {
                      "chip": "eth1/18",
                      "lane": 3
                    }
                  }
                 ]
               }
           }
         }
    },
    "145": {
        "mapping": {
          "id": 145,
          "name": "eth1/19/1",
          "controllingPort": 145,
          "pins": [
            {
              "a": {
                "chip": "IFG9",
                "lane": 20
              },
              "z": {
                "end": {
                  "chip": "eth1/19",
                  "lane": 0
                }
              }
            }
          ]
         },
         "supportedProfiles": {
          "11": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "IFG9",
                      "lane": 20
                     }
                  }
                 ],
                "transceiver": [
                  {
                   "id": {
                      "chip": "eth1/19",
                      "lane": 0
                    }
                  }
                 ]
               }
           },
          "14": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "IFG9",
                      "lane": 20
                     }
                  }
                 ],
                "transceiver": [
                  {
                   "id": {
                      "chip": "eth1/19",
                      "lane": 0
                    }
                  }
                 ]
               }
           },
          "17": {
              "subsumedPorts": [
                146,
                147,
                148
              ],
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "IFG9",
                      "lane": 20
                     }
                  },
                  {
                    "id": {
                      "chip": "IFG9",
                      "lane": 21
                     }
                  },
                  {
                    "id": {
                      "chip": "IFG9",
                      "lane": 22
                     }
                  },
                  {
                    "id": {
                      "chip": "IFG9",
                      "lane": 23
                     }
                  }
                 ],
                "transceiver": [
                  {
                   "id": {
                      "chip": "eth1/19",
                      "lane": 0
                    }
                  },
                  {
                   "id": {
                      "chip": "eth1/19",
                      "lane": 1
                    }
                  },
                  {
                   "id": {
                      "chip": "eth1/19",
                      "lane": 2
                    }
                  },
                  {
                   "id": {
                      "chip": "eth1/19",
                      "lane": 3
                    }
                  }
                 ]
               }
           },
          "19": {
              "subsumedPorts": [
                146
              ],
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "IFG9",
                      "lane": 20
                     }
                  },
                  {
                    "id": {
                      "chip": "IFG9",
                      "lane": 21
                     }
                  }
                 ],
                "transceiver": [
                  {
                   "id": {
                      "chip": "eth1/19",
                      "lane": 0
                    }
                  },
                  {
                   "id": {
                      "chip": "eth1/19",
                      "lane": 1
                    }
                  }
                 ]
               }
           },
          "22": {
              "subsumedPorts": [
                146,
                147,
                148
              ],
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "IFG9",
                      "lane": 20
                     }
                  },
                  {
                    "id": {
                      "chip": "IFG9",
                      "lane": 21
                     }
                  },
                  {
                    "id": {
                      "chip": "IFG9",
                      "lane": 22
                     }
                  },
                  {
                    "id": {
                      "chip": "IFG9",
                      "lane": 23
                     }
                  }
                 ],
                "transceiver": [
                  {
                   "id": {
                      "chip": "eth1/19",
                      "lane": 0
                    }
                  },
                  {
                   "id": {
                      "chip": "eth1/19",
                      "lane": 1
                    }
                  },
                  {
                   "id": {
                      "chip": "eth1/19",
                      "lane": 2
                    }
                  },
                  {
                   "id": {
                      "chip": "eth1/19",
                      "lane": 3
                    }
                  }
                 ]
               }
           },
          "24": {
              "subsumedPorts": [
                146,
                147,
                148
              ],
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "IFG9",
                      "lane": 20
                     }
                  },
                  {
                    "id": {
                      "chip": "IFG9",
                      "lane": 21
                     }
                  },
                  {
                    "id": {
                      "chip": "IFG9",
                      "lane": 22
                     }
                  },
                  {
                    "id": {
                      "chip": "IFG9",
                      "lane": 23
                     }
                  }
                 ],
                "transceiver": [
                  {
                   "id": {
                      "chip": "eth1/19",
                      "lane": 0
                    }
                  },
                  {
                   "id": {
                      "chip": "eth1/19",
                      "lane": 1
                    }
                  },
                  {
                   "id": {
                      "chip": "eth1/19",
                      "lane": 2
                    }
                  },
                  {
                   "id": {
                      "chip": "eth1/19",
                      "lane": 3
                    }
                  }
                 ]
               }
           }
         }
    },
    "146": {
        "mapping": {
          "id": 146,
          "name": "eth1/19/2",
          "controllingPort": 145,
          "pins": [
            {
              "a": {
                "chip": "IFG9",
                "lane": 21
              },
              "z": {
                "end": {
                  "chip": "eth1/19",
                  "lane": 1
                }
              }
            }
          ]
         },
         "supportedProfiles": {
          "11": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "IFG9",
                      "lane": 21
                     }
                  }
                 ],
                "transceiver": [
                  {
                   "id": {
                      "chip": "eth1/19",
                      "lane": 1
                    }
                  }
                 ]
               }
           },
          "14": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "IFG9",
                      "lane": 21
                     }
                  }
                 ],
                "transceiver": [
                  {
                   "id": {
                      "chip": "eth1/19",
                      "lane": 1
                    }
                  }
                 ]
               }
           }
         }
    },
    "147": {
        "mapping": {
          "id": 147,
          "name": "eth1/19/3",
          "controllingPort": 145,
          "pins": [
            {
              "a": {
                "chip": "IFG9",
                "lane": 22
              },
              "z": {
                "end": {
                  "chip": "eth1/19",
                  "lane": 2
                }
              }
            }
          ]
         },
         "supportedProfiles": {
          "11": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "IFG9",
                      "lane": 22
                     }
                  }
                 ],
                "transceiver": [
                  {
                   "id": {
                      "chip": "eth1/19",
                      "lane": 2
                    }
                  }
                 ]
               }
           },
          "14": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "IFG9",
                      "lane": 22
                     }
                  }
                 ],
                "transceiver": [
                  {
                   "id": {
                      "chip": "eth1/19",
                      "lane": 2
                    }
                  }
                 ]
               }
           },
          "19": {
              "subsumedPorts": [
                148
              ],
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "IFG9",
                      "lane": 22
                     }
                  },
                  {
                    "id": {
                      "chip": "IFG9",
                      "lane": 23
                     }
                  }
                 ],
                "transceiver": [
                  {
                   "id": {
                      "chip": "eth1/19",
                      "lane": 2
                    }
                  },
                  {
                   "id": {
                      "chip": "eth1/19",
                      "lane": 3
                    }
                  }
                 ]
               }
           }
         }
    },
    "148": {
        "mapping": {
          "id": 148,
          "name": "eth1/19/4",
          "controllingPort": 145,
          "pins": [
            {
              "a": {
                "chip": "IFG9",
                "lane": 23
              },
              "z": {
                "end": {
                  "chip": "eth1/19",
                  "lane": 3
                }
              }
            }
          ]
         },
         "supportedProfiles": {
          "11": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "IFG9",
                      "lane": 23
                     }
                  }
                 ],
                "transceiver": [
                  {
                   "id": {
                      "chip": "eth1/19",
                      "lane": 3
                    }
                  }
                 ]
               }
           },
          "14": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "IFG9",
                      "lane": 23
                     }
                  }
                 ],
                "transceiver": [
                  {
                   "id": {
                      "chip": "eth1/19",
                      "lane": 3
                    }
                  }
                 ]
               }
           }
         }
    },
    "149": {
        "mapping": {
          "id": 149,
          "name": "eth1/19/1",
          "controllingPort": 149,
          "pins": [
            {
              "a": {
                "chip": "IFG9",
                "lane": 16
              },
              "z": {
                "end": {
                  "chip": "eth1/19",
                  "lane": 0
                }
              }
            }
          ]
         },
         "supportedProfiles": {
          "11": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "IFG9",
                      "lane": 16
                     }
                  }
                 ],
                "transceiver": [
                  {
                   "id": {
                      "chip": "eth1/19",
                      "lane": 0
                    }
                  }
                 ]
               }
           },
          "14": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "IFG9",
                      "lane": 16
                     }
                  }
                 ],
                "transceiver": [
                  {
                   "id": {
                      "chip": "eth1/19",
                      "lane": 0
                    }
                  }
                 ]
               }
           },
          "17": {
              "subsumedPorts": [
                150,
                151,
                152
              ],
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "IFG9",
                      "lane": 16
                     }
                  },
                  {
                    "id": {
                      "chip": "IFG9",
                      "lane": 17
                     }
                  },
                  {
                    "id": {
                      "chip": "IFG9",
                      "lane": 18
                     }
                  },
                  {
                    "id": {
                      "chip": "IFG9",
                      "lane": 19
                     }
                  }
                 ],
                "transceiver": [
                  {
                   "id": {
                      "chip": "eth1/19",
                      "lane": 0
                    }
                  },
                  {
                   "id": {
                      "chip": "eth1/19",
                      "lane": 1
                    }
                  },
                  {
                   "id": {
                      "chip": "eth1/19",
                      "lane": 2
                    }
                  },
                  {
                   "id": {
                      "chip": "eth1/19",
                      "lane": 3
                    }
                  }
                 ]
               }
           },
          "19": {
              "subsumedPorts": [
                150
              ],
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "IFG9",
                      "lane": 16
                     }
                  },
                  {
                    "id": {
                      "chip": "IFG9",
                      "lane": 17
                     }
                  }
                 ],
                "transceiver": [
                  {
                   "id": {
                      "chip": "eth1/19",
                      "lane": 0
                    }
                  },
                  {
                   "id": {
                      "chip": "eth1/19",
                      "lane": 1
                    }
                  }
                 ]
               }
           },
          "22": {
              "subsumedPorts": [
                150,
                151,
                152
              ],
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "IFG9",
                      "lane": 16
                     }
                  },
                  {
                    "id": {
                      "chip": "IFG9",
                      "lane": 17
                     }
                  },
                  {
                    "id": {
                      "chip": "IFG9",
                      "lane": 18
                     }
                  },
                  {
                    "id": {
                      "chip": "IFG9",
                      "lane": 19
                     }
                  }
                 ],
                "transceiver": [
                  {
                   "id": {
                      "chip": "eth1/19",
                      "lane": 0
                    }
                  },
                  {
                   "id": {
                      "chip": "eth1/19",
                      "lane": 1
                    }
                  },
                  {
                   "id": {
                      "chip": "eth1/19",
                      "lane": 2
                    }
                  },
                  {
                   "id": {
                      "chip": "eth1/19",
                      "lane": 3
                    }
                  }
                 ]
               }
           },
          "24": {
              "subsumedPorts": [
                150,
                151,
                152
              ],
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "IFG9",
                      "lane": 16
                     }
                  },
                  {
                    "id": {
                      "chip": "IFG9",
                      "lane": 17
                     }
                  },
                  {
                    "id": {
                      "chip": "IFG9",
                      "lane": 18
                     }
                  },
                  {
                    "id": {
                      "chip": "IFG9",
                      "lane": 19
                     }
                  }
                 ],
                "transceiver": [
                  {
                   "id": {
                      "chip": "eth1/19",
                      "lane": 0
                    }
                  },
                  {
                   "id": {
                      "chip": "eth1/19",
                      "lane": 1
                    }
                  },
                  {
                   "id": {
                      "chip": "eth1/19",
                      "lane": 2
                    }
                  },
                  {
                   "id": {
                      "chip": "eth1/19",
                      "lane": 3
                    }
                  }
                 ]
               }
           }
         }
    },
    "150": {
        "mapping": {
          "id": 150,
          "name": "eth1/19/2",
          "controllingPort": 149,
          "pins": [
            {
              "a": {
                "chip": "IFG9",
                "lane": 17
              },
              "z": {
                "end": {
                  "chip": "eth1/19",
                  "lane": 1
                }
              }
            }
          ]
         },
         "supportedProfiles": {
          "11": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "IFG9",
                      "lane": 17
                     }
                  }
                 ],
                "transceiver": [
                  {
                   "id": {
                      "chip": "eth1/19",
                      "lane": 1
                    }
                  }
                 ]
               }
           },
          "14": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "IFG9",
                      "lane": 17
                     }
                  }
                 ],
                "transceiver": [
                  {
                   "id": {
                      "chip": "eth1/19",
                      "lane": 1
                    }
                  }
                 ]
               }
           }
         }
    },
    "151": {
        "mapping": {
          "id": 151,
          "name": "eth1/19/3",
          "controllingPort": 149,
          "pins": [
            {
              "a": {
                "chip": "IFG9",
                "lane": 18
              },
              "z": {
                "end": {
                  "chip": "eth1/19",
                  "lane": 2
                }
              }
            }
          ]
         },
         "supportedProfiles": {
          "11": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "IFG9",
                      "lane": 18
                     }
                  }
                 ],
                "transceiver": [
                  {
                   "id": {
                      "chip": "eth1/19",
                      "lane": 2
                    }
                  }
                 ]
               }
           },
          "14": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "IFG9",
                      "lane": 18
                     }
                  }
                 ],
                "transceiver": [
                  {
                   "id": {
                      "chip": "eth1/19",
                      "lane": 2
                    }
                  }
                 ]
               }
           },
          "19": {
              "subsumedPorts": [
                152
              ],
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "IFG9",
                      "lane": 18
                     }
                  },
                  {
                    "id": {
                      "chip": "IFG9",
                      "lane": 19
                     }
                  }
                 ],
                "transceiver": [
                  {
                   "id": {
                      "chip": "eth1/19",
                      "lane": 2
                    }
                  },
                  {
                   "id": {
                      "chip": "eth1/19",
                      "lane": 3
                    }
                  }
                 ]
               }
           }
         }
    },
    "152": {
        "mapping": {
          "id": 152,
          "name": "eth1/19/4",
          "controllingPort": 149,
          "pins": [
            {
              "a": {
                "chip": "IFG9",
                "lane": 19
              },
              "z": {
                "end": {
                  "chip": "eth1/19",
                  "lane": 3
                }
              }
            }
          ]
         },
         "supportedProfiles": {
          "11": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "IFG9",
                      "lane": 19
                     }
                  }
                 ],
                "transceiver": [
                  {
                   "id": {
                      "chip": "eth1/19",
                      "lane": 3
                    }
                  }
                 ]
               }
           },
          "14": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "IFG9",
                      "lane": 19
                     }
                  }
                 ],
                "transceiver": [
                  {
                   "id": {
                      "chip": "eth1/19",
                      "lane": 3
                    }
                  }
                 ]
               }
           }
         }
    },
    "153": {
        "mapping": {
          "id": 153,
          "name": "eth1/20/1",
          "controllingPort": 153,
          "pins": [
            {
              "a": {
                "chip": "IFG8",
                "lane": 0
              },
              "z": {
                "end": {
                  "chip": "eth1/20",
                  "lane": 0
                }
              }
            }
          ]
         },
         "supportedProfiles": {
          "11": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "IFG8",
                      "lane": 0
                     }
                  }
                 ],
                "transceiver": [
                  {
                   "id": {
                      "chip": "eth1/20",
                      "lane": 0
                    }
                  }
                 ]
               }
           },
          "14": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "IFG8",
                      "lane": 0
                     }
                  }
                 ],
                "transceiver": [
                  {
                   "id": {
                      "chip": "eth1/20",
                      "lane": 0
                    }
                  }
                 ]
               }
           },
          "17": {
              "subsumedPorts": [
                154,
                155,
                156
              ],
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "IFG8",
                      "lane": 0
                     }
                  },
                  {
                    "id": {
                      "chip": "IFG8",
                      "lane": 1
                     }
                  },
                  {
                    "id": {
                      "chip": "IFG8",
                      "lane": 2
                     }
                  },
                  {
                    "id": {
                      "chip": "IFG8",
                      "lane": 3
                     }
                  }
                 ],
                "transceiver": [
                  {
                   "id": {
                      "chip": "eth1/20",
                      "lane": 0
                    }
                  },
                  {
                   "id": {
                      "chip": "eth1/20",
                      "lane": 1
                    }
                  },
                  {
                   "id": {
                      "chip": "eth1/20",
                      "lane": 2
                    }
                  },
                  {
                   "id": {
                      "chip": "eth1/20",
                      "lane": 3
                    }
                  }
                 ]
               }
           },
          "19": {
              "subsumedPorts": [
                154
              ],
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "IFG8",
                      "lane": 0
                     }
                  },
                  {
                    "id": {
                      "chip": "IFG8",
                      "lane": 1
                     }
                  }
                 ],
                "transceiver": [
                  {
                   "id": {
                      "chip": "eth1/20",
                      "lane": 0
                    }
                  },
                  {
                   "id": {
                      "chip": "eth1/20",
                      "lane": 1
                    }
                  }
                 ]
               }
           },
          "22": {
              "subsumedPorts": [
                154,
                155,
                156
              ],
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "IFG8",
                      "lane": 0
                     }
                  },
                  {
                    "id": {
                      "chip": "IFG8",
                      "lane": 1
                     }
                  },
                  {
                    "id": {
                      "chip": "IFG8",
                      "lane": 2
                     }
                  },
                  {
                    "id": {
                      "chip": "IFG8",
                      "lane": 3
                     }
                  }
                 ],
                "transceiver": [
                  {
                   "id": {
                      "chip": "eth1/20",
                      "lane": 0
                    }
                  },
                  {
                   "id": {
                      "chip": "eth1/20",
                      "lane": 1
                    }
                  },
                  {
                   "id": {
                      "chip": "eth1/20",
                      "lane": 2
                    }
                  },
                  {
                   "id": {
                      "chip": "eth1/20",
                      "lane": 3
                    }
                  }
                 ]
               }
           },
          "24": {
              "subsumedPorts": [
                154,
                155,
                156
              ],
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "IFG8",
                      "lane": 0
                     }
                  },
                  {
                    "id": {
                      "chip": "IFG8",
                      "lane": 1
                     }
                  },
                  {
                    "id": {
                      "chip": "IFG8",
                      "lane": 2
                     }
                  },
                  {
                    "id": {
                      "chip": "IFG8",
                      "lane": 3
                     }
                  }
                 ],
                "transceiver": [
                  {
                   "id": {
                      "chip": "eth1/20",
                      "lane": 0
                    }
                  },
                  {
                   "id": {
                      "chip": "eth1/20",
                      "lane": 1
                    }
                  },
                  {
                   "id": {
                      "chip": "eth1/20",
                      "lane": 2
                    }
                  },
                  {
                   "id": {
                      "chip": "eth1/20",
                      "lane": 3
                    }
                  }
                 ]
               }
           }
         }
    },
    "154": {
        "mapping": {
          "id": 154,
          "name": "eth1/20/2",
          "controllingPort": 153,
          "pins": [
            {
              "a": {
                "chip": "IFG8",
                "lane": 1
              },
              "z": {
                "end": {
                  "chip": "eth1/20",
                  "lane": 1
                }
              }
            }
          ]
         },
         "supportedProfiles": {
          "11": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "IFG8",
                      "lane": 1
                     }
                  }
                 ],
                "transceiver": [
                  {
                   "id": {
                      "chip": "eth1/20",
                      "lane": 1
                    }
                  }
                 ]
               }
           },
          "14": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "IFG8",
                      "lane": 1
                     }
                  }
                 ],
                "transceiver": [
                  {
                   "id": {
                      "chip": "eth1/20",
                      "lane": 1
                    }
                  }
                 ]
               }
           }
         }
    },
    "155": {
        "mapping": {
          "id": 155,
          "name": "eth1/20/3",
          "controllingPort": 153,
          "pins": [
            {
              "a": {
                "chip": "IFG8",
                "lane": 2
              },
              "z": {
                "end": {
                  "chip": "eth1/20",
                  "lane": 2
                }
              }
            }
          ]
         },
         "supportedProfiles": {
          "11": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "IFG8",
                      "lane": 2
                     }
                  }
                 ],
                "transceiver": [
                  {
                   "id": {
                      "chip": "eth1/20",
                      "lane": 2
                    }
                  }
                 ]
               }
           },
          "14": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "IFG8",
                      "lane": 2
                     }
                  }
                 ],
                "transceiver": [
                  {
                   "id": {
                      "chip": "eth1/20",
                      "lane": 2
                    }
                  }
                 ]
               }
           },
          "19": {
              "subsumedPorts": [
                156
              ],
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "IFG8",
                      "lane": 2
                     }
                  },
                  {
                    "id": {
                      "chip": "IFG8",
                      "lane": 3
                     }
                  }
                 ],
                "transceiver": [
                  {
                   "id": {
                      "chip": "eth1/20",
                      "lane": 2
                    }
                  },
                  {
                   "id": {
                      "chip": "eth1/20",
                      "lane": 3
                    }
                  }
                 ]
               }
           }
         }
    },
    "156": {
        "mapping": {
          "id": 156,
          "name": "eth1/20/4",
          "controllingPort": 153,
          "pins": [
            {
              "a": {
                "chip": "IFG8",
                "lane": 3
              },
              "z": {
                "end": {
                  "chip": "eth1/20",
                  "lane": 3
                }
              }
            }
          ]
         },
         "supportedProfiles": {
          "11": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "IFG8",
                      "lane": 3
                     }
                  }
                 ],
                "transceiver": [
                  {
                   "id": {
                      "chip": "eth1/20",
                      "lane": 3
                    }
                  }
                 ]
               }
           },
          "14": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "IFG8",
                      "lane": 3
                     }
                  }
                 ],
                "transceiver": [
                  {
                   "id": {
                      "chip": "eth1/20",
                      "lane": 3
                    }
                  }
                 ]
               }
           }
         }
    },
    "157": {
        "mapping": {
          "id": 157,
          "name": "eth1/20/1",
          "controllingPort": 157,
          "pins": [
            {
              "a": {
                "chip": "IFG8",
                "lane": 4
              },
              "z": {
                "end": {
                  "chip": "eth1/20",
                  "lane": 0
                }
              }
            }
          ]
         },
         "supportedProfiles": {
          "11": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "IFG8",
                      "lane": 4
                     }
                  }
                 ],
                "transceiver": [
                  {
                   "id": {
                      "chip": "eth1/20",
                      "lane": 0
                    }
                  }
                 ]
               }
           },
          "14": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "IFG8",
                      "lane": 4
                     }
                  }
                 ],
                "transceiver": [
                  {
                   "id": {
                      "chip": "eth1/20",
                      "lane": 0
                    }
                  }
                 ]
               }
           },
          "17": {
              "subsumedPorts": [
                158,
                159,
                160
              ],
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "IFG8",
                      "lane": 4
                     }
                  },
                  {
                    "id": {
                      "chip": "IFG8",
                      "lane": 5
                     }
                  },
                  {
                    "id": {
                      "chip": "IFG8",
                      "lane": 6
                     }
                  },
                  {
                    "id": {
                      "chip": "IFG8",
                      "lane": 7
                     }
                  }
                 ],
                "transceiver": [
                  {
                   "id": {
                      "chip": "eth1/20",
                      "lane": 0
                    }
                  },
                  {
                   "id": {
                      "chip": "eth1/20",
                      "lane": 1
                    }
                  },
                  {
                   "id": {
                      "chip": "eth1/20",
                      "lane": 2
                    }
                  },
                  {
                   "id": {
                      "chip": "eth1/20",
                      "lane": 3
                    }
                  }
                 ]
               }
           },
          "19": {
              "subsumedPorts": [
                158
              ],
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "IFG8",
                      "lane": 4
                     }
                  },
                  {
                    "id": {
                      "chip": "IFG8",
                      "lane": 5
                     }
                  }
                 ],
                "transceiver": [
                  {
                   "id": {
                      "chip": "eth1/20",
                      "lane": 0
                    }
                  },
                  {
                   "id": {
                      "chip": "eth1/20",
                      "lane": 1
                    }
                  }
                 ]
               }
           },
          "22": {
              "subsumedPorts": [
                158,
                159,
                160
              ],
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "IFG8",
                      "lane": 4
                     }
                  },
                  {
                    "id": {
                      "chip": "IFG8",
                      "lane": 5
                     }
                  },
                  {
                    "id": {
                      "chip": "IFG8",
                      "lane": 6
                     }
                  },
                  {
                    "id": {
                      "chip": "IFG8",
                      "lane": 7
                     }
                  }
                 ],
                "transceiver": [
                  {
                   "id": {
                      "chip": "eth1/20",
                      "lane": 0
                    }
                  },
                  {
                   "id": {
                      "chip": "eth1/20",
                      "lane": 1
                    }
                  },
                  {
                   "id": {
                      "chip": "eth1/20",
                      "lane": 2
                    }
                  },
                  {
                   "id": {
                      "chip": "eth1/20",
                      "lane": 3
                    }
                  }
                 ]
               }
           },
          "24": {
              "subsumedPorts": [
                158,
                159,
                160
              ],
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "IFG8",
                      "lane": 4
                     }
                  },
                  {
                    "id": {
                      "chip": "IFG8",
                      "lane": 5
                     }
                  },
                  {
                    "id": {
                      "chip": "IFG8",
                      "lane": 6
                     }
                  },
                  {
                    "id": {
                      "chip": "IFG8",
                      "lane": 7
                     }
                  }
                 ],
                "transceiver": [
                  {
                   "id": {
                      "chip": "eth1/20",
                      "lane": 0
                    }
                  },
                  {
                   "id": {
                      "chip": "eth1/20",
                      "lane": 1
                    }
                  },
                  {
                   "id": {
                      "chip": "eth1/20",
                      "lane": 2
                    }
                  },
                  {
                   "id": {
                      "chip": "eth1/20",
                      "lane": 3
                    }
                  }
                 ]
               }
           }
         }
    },
    "158": {
        "mapping": {
          "id": 158,
          "name": "eth1/20/2",
          "controllingPort": 157,
          "pins": [
            {
              "a": {
                "chip": "IFG8",
                "lane": 5
              },
              "z": {
                "end": {
                  "chip": "eth1/20",
                  "lane": 1
                }
              }
            }
          ]
         },
         "supportedProfiles": {
          "11": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "IFG8",
                      "lane": 5
                     }
                  }
                 ],
                "transceiver": [
                  {
                   "id": {
                      "chip": "eth1/20",
                      "lane": 1
                    }
                  }
                 ]
               }
           },
          "14": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "IFG8",
                      "lane": 5
                     }
                  }
                 ],
                "transceiver": [
                  {
                   "id": {
                      "chip": "eth1/20",
                      "lane": 1
                    }
                  }
                 ]
               }
           }
         }
    },
    "159": {
        "mapping": {
          "id": 159,
          "name": "eth1/20/3",
          "controllingPort": 157,
          "pins": [
            {
              "a": {
                "chip": "IFG8",
                "lane": 6
              },
              "z": {
                "end": {
                  "chip": "eth1/20",
                  "lane": 2
                }
              }
            }
          ]
         },
         "supportedProfiles": {
          "11": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "IFG8",
                      "lane": 6
                     }
                  }
                 ],
                "transceiver": [
                  {
                   "id": {
                      "chip": "eth1/20",
                      "lane": 2
                    }
                  }
                 ]
               }
           },
          "14": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "IFG8",
                      "lane": 6
                     }
                  }
                 ],
                "transceiver": [
                  {
                   "id": {
                      "chip": "eth1/20",
                      "lane": 2
                    }
                  }
                 ]
               }
           },
          "19": {
              "subsumedPorts": [
                160
              ],
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "IFG8",
                      "lane": 6
                     }
                  },
                  {
                    "id": {
                      "chip": "IFG8",
                      "lane": 7
                     }
                  }
                 ],
                "transceiver": [
                  {
                   "id": {
                      "chip": "eth1/20",
                      "lane": 2
                    }
                  },
                  {
                   "id": {
                      "chip": "eth1/20",
                      "lane": 3
                    }
                  }
                 ]
               }
           }
         }
    },
    "160": {
        "mapping": {
          "id": 160,
          "name": "eth1/20/4",
          "controllingPort": 157,
          "pins": [
            {
              "a": {
                "chip": "IFG8",
                "lane": 7
              },
              "z": {
                "end": {
                  "chip": "eth1/20",
                  "lane": 3
                }
              }
            }
          ]
         },
         "supportedProfiles": {
          "11": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "IFG8",
                      "lane": 7
                     }
                  }
                 ],
                "transceiver": [
                  {
                   "id": {
                      "chip": "eth1/20",
                      "lane": 3
                    }
                  }
                 ]
               }
           },
          "14": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "IFG8",
                      "lane": 7
                     }
                  }
                 ],
                "transceiver": [
                  {
                   "id": {
                      "chip": "eth1/20",
                      "lane": 3
                    }
                  }
                 ]
               }
           }
         }
    },
    "161": {
        "mapping": {
          "id": 161,
          "name": "eth1/21/1",
          "controllingPort": 161,
          "pins": [
            {
              "a": {
                "chip": "IFG11",
                "lane": 12
              },
              "z": {
                "end": {
                  "chip": "eth1/21",
                  "lane": 0
                }
              }
            }
          ]
         },
         "supportedProfiles": {
          "11": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "IFG11",
                      "lane": 12
                     }
                  }
                 ],
                "transceiver": [
                  {
                   "id": {
                      "chip": "eth1/21",
                      "lane": 0
                    }
                  }
                 ]
               }
           },
          "14": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "IFG11",
                      "lane": 12
                     }
                  }
                 ],
                "transceiver": [
                  {
                   "id": {
                      "chip": "eth1/21",
                      "lane": 0
                    }
                  }
                 ]
               }
           },
          "17": {
              "subsumedPorts": [
                162,
                163,
                164
              ],
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "IFG11",
                      "lane": 12
                     }
                  },
                  {
                    "id": {
                      "chip": "IFG11",
                      "lane": 13
                     }
                  },
                  {
                    "id": {
                      "chip": "IFG11",
                      "lane": 14
                     }
                  },
                  {
                    "id": {
                      "chip": "IFG11",
                      "lane": 15
                     }
                  }
                 ],
                "transceiver": [
                  {
                   "id": {
                      "chip": "eth1/21",
                      "lane": 0
                    }
                  },
                  {
                   "id": {
                      "chip": "eth1/21",
                      "lane": 1
                    }
                  },
                  {
                   "id": {
                      "chip": "eth1/21",
                      "lane": 2
                    }
                  },
                  {
                   "id": {
                      "chip": "eth1/21",
                      "lane": 3
                    }
                  }
                 ]
               }
           },
          "19": {
              "subsumedPorts": [
                162
              ],
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "IFG11",
                      "lane": 12
                     }
                  },
                  {
                    "id": {
                      "chip": "IFG11",
                      "lane": 13
                     }
                  }
                 ],
                "transceiver": [
                  {
                   "id": {
                      "chip": "eth1/21",
                      "lane": 0
                    }
                  },
                  {
                   "id": {
                      "chip": "eth1/21",
                      "lane": 1
                    }
                  }
                 ]
               }
           },
          "22": {
              "subsumedPorts": [
                162,
                163,
                164
              ],
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "IFG11",
                      "lane": 12
                     }
                  },
                  {
                    "id": {
                      "chip": "IFG11",
                      "lane": 13
                     }
                  },
                  {
                    "id": {
                      "chip": "IFG11",
                      "lane": 14
                     }
                  },
                  {
                    "id": {
                      "chip": "IFG11",
                      "lane": 15
                     }
                  }
                 ],
                "transceiver": [
                  {
                   "id": {
                      "chip": "eth1/21",
                      "lane": 0
                    }
                  },
                  {
                   "id": {
                      "chip": "eth1/21",
                      "lane": 1
                    }
                  },
                  {
                   "id": {
                      "chip": "eth1/21",
                      "lane": 2
                    }
                  },
                  {
                   "id": {
                      "chip": "eth1/21",
                      "lane": 3
                    }
                  }
                 ]
               }
           },
          "24": {
              "subsumedPorts": [
                162,
                163,
                164
              ],
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "IFG11",
                      "lane": 12
                     }
                  },
                  {
                    "id": {
                      "chip": "IFG11",
                      "lane": 13
                     }
                  },
                  {
                    "id": {
                      "chip": "IFG11",
                      "lane": 14
                     }
                  },
                  {
                    "id": {
                      "chip": "IFG11",
                      "lane": 15
                     }
                  }
                 ],
                "transceiver": [
                  {
                   "id": {
                      "chip": "eth1/21",
                      "lane": 0
                    }
                  },
                  {
                   "id": {
                      "chip": "eth1/21",
                      "lane": 1
                    }
                  },
                  {
                   "id": {
                      "chip": "eth1/21",
                      "lane": 2
                    }
                  },
                  {
                   "id": {
                      "chip": "eth1/21",
                      "lane": 3
                    }
                  }
                 ]
               }
           }
         }
    },
    "162": {
        "mapping": {
          "id": 162,
          "name": "eth1/21/2",
          "controllingPort": 161,
          "pins": [
            {
              "a": {
                "chip": "IFG11",
                "lane": 13
              },
              "z": {
                "end": {
                  "chip": "eth1/21",
                  "lane": 1
                }
              }
            }
          ]
         },
         "supportedProfiles": {
          "11": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "IFG11",
                      "lane": 13
                     }
                  }
                 ],
                "transceiver": [
                  {
                   "id": {
                      "chip": "eth1/21",
                      "lane": 1
                    }
                  }
                 ]
               }
           },
          "14": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "IFG11",
                      "lane": 13
                     }
                  }
                 ],
                "transceiver": [
                  {
                   "id": {
                      "chip": "eth1/21",
                      "lane": 1
                    }
                  }
                 ]
               }
           }
         }
    },
    "163": {
        "mapping": {
          "id": 163,
          "name": "eth1/21/3",
          "controllingPort": 161,
          "pins": [
            {
              "a": {
                "chip": "IFG11",
                "lane": 14
              },
              "z": {
                "end": {
                  "chip": "eth1/21",
                  "lane": 2
                }
              }
            }
          ]
         },
         "supportedProfiles": {
          "11": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "IFG11",
                      "lane": 14
                     }
                  }
                 ],
                "transceiver": [
                  {
                   "id": {
                      "chip": "eth1/21",
                      "lane": 2
                    }
                  }
                 ]
               }
           },
          "14": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "IFG11",
                      "lane": 14
                     }
                  }
                 ],
                "transceiver": [
                  {
                   "id": {
                      "chip": "eth1/21",
                      "lane": 2
                    }
                  }
                 ]
               }
           },
          "19": {
              "subsumedPorts": [
                164
              ],
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "IFG11",
                      "lane": 14
                     }
                  },
                  {
                    "id": {
                      "chip": "IFG11",
                      "lane": 15
                     }
                  }
                 ],
                "transceiver": [
                  {
                   "id": {
                      "chip": "eth1/21",
                      "lane": 2
                    }
                  },
                  {
                   "id": {
                      "chip": "eth1/21",
                      "lane": 3
                    }
                  }
                 ]
               }
           }
         }
    },
    "164": {
        "mapping": {
          "id": 164,
          "name": "eth1/21/4",
          "controllingPort": 161,
          "pins": [
            {
              "a": {
                "chip": "IFG11",
                "lane": 15
              },
              "z": {
                "end": {
                  "chip": "eth1/21",
                  "lane": 3
                }
              }
            }
          ]
         },
         "supportedProfiles": {
          "11": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "IFG11",
                      "lane": 15
                     }
                  }
                 ],
                "transceiver": [
                  {
                   "id": {
                      "chip": "eth1/21",
                      "lane": 3
                    }
                  }
                 ]
               }
           },
          "14": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "IFG11",
                      "lane": 15
                     }
                  }
                 ],
                "transceiver": [
                  {
                   "id": {
                      "chip": "eth1/21",
                      "lane": 3
                    }
                  }
                 ]
               }
           }
         }
    },
    "165": {
        "mapping": {
          "id": 165,
          "name": "eth1/21/1",
          "controllingPort": 165,
          "pins": [
            {
              "a": {
                "chip": "IFG11",
                "lane": 8
              },
              "z": {
                "end": {
                  "chip": "eth1/21",
                  "lane": 0
                }
              }
            }
          ]
         },
         "supportedProfiles": {
          "11": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "IFG11",
                      "lane": 8
                     }
                  }
                 ],
                "transceiver": [
                  {
                   "id": {
                      "chip": "eth1/21",
                      "lane": 0
                    }
                  }
                 ]
               }
           },
          "14": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "IFG11",
                      "lane": 8
                     }
                  }
                 ],
                "transceiver": [
                  {
                   "id": {
                      "chip": "eth1/21",
                      "lane": 0
                    }
                  }
                 ]
               }
           },
          "17": {
              "subsumedPorts": [
                166,
                167,
                168
              ],
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "IFG11",
                      "lane": 8
                     }
                  },
                  {
                    "id": {
                      "chip": "IFG11",
                      "lane": 9
                     }
                  },
                  {
                    "id": {
                      "chip": "IFG11",
                      "lane": 10
                     }
                  },
                  {
                    "id": {
                      "chip": "IFG11",
                      "lane": 11
                     }
                  }
                 ],
                "transceiver": [
                  {
                   "id": {
                      "chip": "eth1/21",
                      "lane": 0
                    }
                  },
                  {
                   "id": {
                      "chip": "eth1/21",
                      "lane": 1
                    }
                  },
                  {
                   "id": {
                      "chip": "eth1/21",
                      "lane": 2
                    }
                  },
                  {
                   "id": {
                      "chip": "eth1/21",
                      "lane": 3
                    }
                  }
                 ]
               }
           },
          "19": {
              "subsumedPorts": [
                166
              ],
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "IFG11",
                      "lane": 8
                     }
                  },
                  {
                    "id": {
                      "chip": "IFG11",
                      "lane": 9
                     }
                  }
                 ],
                "transceiver": [
                  {
                   "id": {
                      "chip": "eth1/21",
                      "lane": 0
                    }
                  },
                  {
                   "id": {
                      "chip": "eth1/21",
                      "lane": 1
                    }
                  }
                 ]
               }
           },
          "22": {
              "subsumedPorts": [
                166,
                167,
                168
              ],
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "IFG11",
                      "lane": 8
                     }
                  },
                  {
                    "id": {
                      "chip": "IFG11",
                      "lane": 9
                     }
                  },
                  {
                    "id": {
                      "chip": "IFG11",
                      "lane": 10
                     }
                  },
                  {
                    "id": {
                      "chip": "IFG11",
                      "lane": 11
                     }
                  }
                 ],
                "transceiver": [
                  {
                   "id": {
                      "chip": "eth1/21",
                      "lane": 0
                    }
                  },
                  {
                   "id": {
                      "chip": "eth1/21",
                      "lane": 1
                    }
                  },
                  {
                   "id": {
                      "chip": "eth1/21",
                      "lane": 2
                    }
                  },
                  {
                   "id": {
                      "chip": "eth1/21",
                      "lane": 3
                    }
                  }
                 ]
               }
           },
          "24": {
              "subsumedPorts": [
                166,
                167,
                168
              ],
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "IFG11",
                      "lane": 8
                     }
                  },
                  {
                    "id": {
                      "chip": "IFG11",
                      "lane": 9
                     }
                  },
                  {
                    "id": {
                      "chip": "IFG11",
                      "lane": 10
                     }
                  },
                  {
                    "id": {
                      "chip": "IFG11",
                      "lane": 11
                     }
                  }
                 ],
                "transceiver": [
                  {
                   "id": {
                      "chip": "eth1/21",
                      "lane": 0
                    }
                  },
                  {
                   "id": {
                      "chip": "eth1/21",
                      "lane": 1
                    }
                  },
                  {
                   "id": {
                      "chip": "eth1/21",
                      "lane": 2
                    }
                  },
                  {
                   "id": {
                      "chip": "eth1/21",
                      "lane": 3
                    }
                  }
                 ]
               }
           }
         }
    },
    "166": {
        "mapping": {
          "id": 166,
          "name": "eth1/21/2",
          "controllingPort": 165,
          "pins": [
            {
              "a": {
                "chip": "IFG11",
                "lane": 9
              },
              "z": {
                "end": {
                  "chip": "eth1/21",
                  "lane": 1
                }
              }
            }
          ]
         },
         "supportedProfiles": {
          "11": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "IFG11",
                      "lane": 9
                     }
                  }
                 ],
                "transceiver": [
                  {
                   "id": {
                      "chip": "eth1/21",
                      "lane": 1
                    }
                  }
                 ]
               }
           },
          "14": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "IFG11",
                      "lane": 9
                     }
                  }
                 ],
                "transceiver": [
                  {
                   "id": {
                      "chip": "eth1/21",
                      "lane": 1
                    }
                  }
                 ]
               }
           }
         }
    },
    "167": {
        "mapping": {
          "id": 167,
          "name": "eth1/21/3",
          "controllingPort": 165,
          "pins": [
            {
              "a": {
                "chip": "IFG11",
                "lane": 10
              },
              "z": {
                "end": {
                  "chip": "eth1/21",
                  "lane": 2
                }
              }
            }
          ]
         },
         "supportedProfiles": {
          "11": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "IFG11",
                      "lane": 10
                     }
                  }
                 ],
                "transceiver": [
                  {
                   "id": {
                      "chip": "eth1/21",
                      "lane": 2
                    }
                  }
                 ]
               }
           },
          "14": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "IFG11",
                      "lane": 10
                     }
                  }
                 ],
                "transceiver": [
                  {
                   "id": {
                      "chip": "eth1/21",
                      "lane": 2
                    }
                  }
                 ]
               }
           },
          "19": {
              "subsumedPorts": [
                168
              ],
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "IFG11",
                      "lane": 10
                     }
                  },
                  {
                    "id": {
                      "chip": "IFG11",
                      "lane": 11
                     }
                  }
                 ],
                "transceiver": [
                  {
                   "id": {
                      "chip": "eth1/21",
                      "lane": 2
                    }
                  },
                  {
                   "id": {
                      "chip": "eth1/21",
                      "lane": 3
                    }
                  }
                 ]
               }
           }
         }
    },
    "168": {
        "mapping": {
          "id": 168,
          "name": "eth1/21/4",
          "controllingPort": 165,
          "pins": [
            {
              "a": {
                "chip": "IFG11",
                "lane": 11
              },
              "z": {
                "end": {
                  "chip": "eth1/21",
                  "lane": 3
                }
              }
            }
          ]
         },
         "supportedProfiles": {
          "11": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "IFG11",
                      "lane": 11
                     }
                  }
                 ],
                "transceiver": [
                  {
                   "id": {
                      "chip": "eth1/21",
                      "lane": 3
                    }
                  }
                 ]
               }
           },
          "14": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "IFG11",
                      "lane": 11
                     }
                  }
                 ],
                "transceiver": [
                  {
                   "id": {
                      "chip": "eth1/21",
                      "lane": 3
                    }
                  }
                 ]
               }
           }
         }
    },
    "169": {
        "mapping": {
          "id": 169,
          "name": "eth1/22/1",
          "controllingPort": 169,
          "pins": [
            {
              "a": {
                "chip": "IFG7",
                "lane": 4
              },
              "z": {
                "end": {
                  "chip": "eth1/22",
                  "lane": 0
                }
              }
            }
          ]
         },
         "supportedProfiles": {
          "11": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "IFG7",
                      "lane": 4
                     }
                  }
                 ],
                "transceiver": [
                  {
                   "id": {
                      "chip": "eth1/22",
                      "lane": 0
                    }
                  }
                 ]
               }
           },
          "14": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "IFG7",
                      "lane": 4
                     }
                  }
                 ],
                "transceiver": [
                  {
                   "id": {
                      "chip": "eth1/22",
                      "lane": 0
                    }
                  }
                 ]
               }
           },
          "17": {
              "subsumedPorts": [
                170,
                171,
                172
              ],
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "IFG7",
                      "lane": 4
                     }
                  },
                  {
                    "id": {
                      "chip": "IFG7",
                      "lane": 5
                     }
                  },
                  {
                    "id": {
                      "chip": "IFG7",
                      "lane": 6
                     }
                  },
                  {
                    "id": {
                      "chip": "IFG7",
                      "lane": 7
                     }
                  }
                 ],
                "transceiver": [
                  {
                   "id": {
                      "chip": "eth1/22",
                      "lane": 0
                    }
                  },
                  {
                   "id": {
                      "chip": "eth1/22",
                      "lane": 1
                    }
                  },
                  {
                   "id": {
                      "chip": "eth1/22",
                      "lane": 2
                    }
                  },
                  {
                   "id": {
                      "chip": "eth1/22",
                      "lane": 3
                    }
                  }
                 ]
               }
           },
          "19": {
              "subsumedPorts": [
                170
              ],
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "IFG7",
                      "lane": 4
                     }
                  },
                  {
                    "id": {
                      "chip": "IFG7",
                      "lane": 5
                     }
                  }
                 ],
                "transceiver": [
                  {
                   "id": {
                      "chip": "eth1/22",
                      "lane": 0
                    }
                  },
                  {
                   "id": {
                      "chip": "eth1/22",
                      "lane": 1
                    }
                  }
                 ]
               }
           },
          "22": {
              "subsumedPorts": [
                170,
                171,
                172
              ],
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "IFG7",
                      "lane": 4
                     }
                  },
                  {
                    "id": {
                      "chip": "IFG7",
                      "lane": 5
                     }
                  },
                  {
                    "id": {
                      "chip": "IFG7",
                      "lane": 6
                     }
                  },
                  {
                    "id": {
                      "chip": "IFG7",
                      "lane": 7
                     }
                  }
                 ],
                "transceiver": [
                  {
                   "id": {
                      "chip": "eth1/22",
                      "lane": 0
                    }
                  },
                  {
                   "id": {
                      "chip": "eth1/22",
                      "lane": 1
                    }
                  },
                  {
                   "id": {
                      "chip": "eth1/22",
                      "lane": 2
                    }
                  },
                  {
                   "id": {
                      "chip": "eth1/22",
                      "lane": 3
                    }
                  }
                 ]
               }
           },
          "24": {
              "subsumedPorts": [
                170,
                171,
                172
              ],
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "IFG7",
                      "lane": 4
                     }
                  },
                  {
                    "id": {
                      "chip": "IFG7",
                      "lane": 5
                     }
                  },
                  {
                    "id": {
                      "chip": "IFG7",
                      "lane": 6
                     }
                  },
                  {
                    "id": {
                      "chip": "IFG7",
                      "lane": 7
                     }
                  }
                 ],
                "transceiver": [
                  {
                   "id": {
                      "chip": "eth1/22",
                      "lane": 0
                    }
                  },
                  {
                   "id": {
                      "chip": "eth1/22",
                      "lane": 1
                    }
                  },
                  {
                   "id": {
                      "chip": "eth1/22",
                      "lane": 2
                    }
                  },
                  {
                   "id": {
                      "chip": "eth1/22",
                      "lane": 3
                    }
                  }
                 ]
               }
           }
         }
    },
    "170": {
        "mapping": {
          "id": 170,
          "name": "eth1/22/2",
          "controllingPort": 169,
          "pins": [
            {
              "a": {
                "chip": "IFG7",
                "lane": 5
              },
              "z": {
                "end": {
                  "chip": "eth1/22",
                  "lane": 1
                }
              }
            }
          ]
         },
         "supportedProfiles": {
          "11": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "IFG7",
                      "lane": 5
                     }
                  }
                 ],
                "transceiver": [
                  {
                   "id": {
                      "chip": "eth1/22",
                      "lane": 1
                    }
                  }
                 ]
               }
           },
          "14": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "IFG7",
                      "lane": 5
                     }
                  }
                 ],
                "transceiver": [
                  {
                   "id": {
                      "chip": "eth1/22",
                      "lane": 1
                    }
                  }
                 ]
               }
           }
         }
    },
    "171": {
        "mapping": {
          "id": 171,
          "name": "eth1/22/3",
          "controllingPort": 169,
          "pins": [
            {
              "a": {
                "chip": "IFG7",
                "lane": 6
              },
              "z": {
                "end": {
                  "chip": "eth1/22",
                  "lane": 2
                }
              }
            }
          ]
         },
         "supportedProfiles": {
          "11": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "IFG7",
                      "lane": 6
                     }
                  }
                 ],
                "transceiver": [
                  {
                   "id": {
                      "chip": "eth1/22",
                      "lane": 2
                    }
                  }
                 ]
               }
           },
          "14": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "IFG7",
                      "lane": 6
                     }
                  }
                 ],
                "transceiver": [
                  {
                   "id": {
                      "chip": "eth1/22",
                      "lane": 2
                    }
                  }
                 ]
               }
           },
          "19": {
              "subsumedPorts": [
                172
              ],
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "IFG7",
                      "lane": 6
                     }
                  },
                  {
                    "id": {
                      "chip": "IFG7",
                      "lane": 7
                     }
                  }
                 ],
                "transceiver": [
                  {
                   "id": {
                      "chip": "eth1/22",
                      "lane": 2
                    }
                  },
                  {
                   "id": {
                      "chip": "eth1/22",
                      "lane": 3
                    }
                  }
                 ]
               }
           }
         }
    },
    "172": {
        "mapping": {
          "id": 172,
          "name": "eth1/22/4",
          "controllingPort": 169,
          "pins": [
            {
              "a": {
                "chip": "IFG7",
                "lane": 7
              },
              "z": {
                "end": {
                  "chip": "eth1/22",
                  "lane": 3
                }
              }
            }
          ]
         },
         "supportedProfiles": {
          "11": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "IFG7",
                      "lane": 7
                     }
                  }
                 ],
                "transceiver": [
                  {
                   "id": {
                      "chip": "eth1/22",
                      "lane": 3
                    }
                  }
                 ]
               }
           },
          "14": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "IFG7",
                      "lane": 7
                     }
                  }
                 ],
                "transceiver": [
                  {
                   "id": {
                      "chip": "eth1/22",
                      "lane": 3
                    }
                  }
                 ]
               }
           }
         }
    },
    "173": {
        "mapping": {
          "id": 173,
          "name": "eth1/22/1",
          "controllingPort": 173,
          "pins": [
            {
              "a": {
                "chip": "IFG7",
                "lane": 0
              },
              "z": {
                "end": {
                  "chip": "eth1/22",
                  "lane": 0
                }
              }
            }
          ]
         },
         "supportedProfiles": {
          "11": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "IFG7",
                      "lane": 0
                     }
                  }
                 ],
                "transceiver": [
                  {
                   "id": {
                      "chip": "eth1/22",
                      "lane": 0
                    }
                  }
                 ]
               }
           },
          "14": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "IFG7",
                      "lane": 0
                     }
                  }
                 ],
                "transceiver": [
                  {
                   "id": {
                      "chip": "eth1/22",
                      "lane": 0
                    }
                  }
                 ]
               }
           },
          "17": {
              "subsumedPorts": [
                174,
                175,
                176
              ],
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "IFG7",
                      "lane": 0
                     }
                  },
                  {
                    "id": {
                      "chip": "IFG7",
                      "lane": 1
                     }
                  },
                  {
                    "id": {
                      "chip": "IFG7",
                      "lane": 2
                     }
                  },
                  {
                    "id": {
                      "chip": "IFG7",
                      "lane": 3
                     }
                  }
                 ],
                "transceiver": [
                  {
                   "id": {
                      "chip": "eth1/22",
                      "lane": 0
                    }
                  },
                  {
                   "id": {
                      "chip": "eth1/22",
                      "lane": 1
                    }
                  },
                  {
                   "id": {
                      "chip": "eth1/22",
                      "lane": 2
                    }
                  },
                  {
                   "id": {
                      "chip": "eth1/22",
                      "lane": 3
                    }
                  }
                 ]
               }
           },
          "19": {
              "subsumedPorts": [
                174
              ],
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "IFG7",
                      "lane": 0
                     }
                  },
                  {
                    "id": {
                      "chip": "IFG7",
                      "lane": 1
                     }
                  }
                 ],
                "transceiver": [
                  {
                   "id": {
                      "chip": "eth1/22",
                      "lane": 0
                    }
                  },
                  {
                   "id": {
                      "chip": "eth1/22",
                      "lane": 1
                    }
                  }
                 ]
               }
           },
          "22": {
              "subsumedPorts": [
                174,
                175,
                176
              ],
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "IFG7",
                      "lane": 0
                     }
                  },
                  {
                    "id": {
                      "chip": "IFG7",
                      "lane": 1
                     }
                  },
                  {
                    "id": {
                      "chip": "IFG7",
                      "lane": 2
                     }
                  },
                  {
                    "id": {
                      "chip": "IFG7",
                      "lane": 3
                     }
                  }
                 ],
                "transceiver": [
                  {
                   "id": {
                      "chip": "eth1/22",
                      "lane": 0
                    }
                  },
                  {
                   "id": {
                      "chip": "eth1/22",
                      "lane": 1
                    }
                  },
                  {
                   "id": {
                      "chip": "eth1/22",
                      "lane": 2
                    }
                  },
                  {
                   "id": {
                      "chip": "eth1/22",
                      "lane": 3
                    }
                  }
                 ]
               }
           },
          "24": {
              "subsumedPorts": [
                174,
                175,
                176
              ],
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "IFG7",
                      "lane": 0
                     }
                  },
                  {
                    "id": {
                      "chip": "IFG7",
                      "lane": 1
                     }
                  },
                  {
                    "id": {
                      "chip": "IFG7",
                      "lane": 2
                     }
                  },
                  {
                    "id": {
                      "chip": "IFG7",
                      "lane": 3
                     }
                  }
                 ],
                "transceiver": [
                  {
                   "id": {
                      "chip": "eth1/22",
                      "lane": 0
                    }
                  },
                  {
                   "id": {
                      "chip": "eth1/22",
                      "lane": 1
                    }
                  },
                  {
                   "id": {
                      "chip": "eth1/22",
                      "lane": 2
                    }
                  },
                  {
                   "id": {
                      "chip": "eth1/22",
                      "lane": 3
                    }
                  }
                 ]
               }
           }
         }
    },
    "174": {
        "mapping": {
          "id": 174,
          "name": "eth1/22/2",
          "controllingPort": 173,
          "pins": [
            {
              "a": {
                "chip": "IFG7",
                "lane": 1
              },
              "z": {
                "end": {
                  "chip": "eth1/22",
                  "lane": 1
                }
              }
            }
          ]
         },
         "supportedProfiles": {
          "11": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "IFG7",
                      "lane": 1
                     }
                  }
                 ],
                "transceiver": [
                  {
                   "id": {
                      "chip": "eth1/22",
                      "lane": 1
                    }
                  }
                 ]
               }
           },
          "14": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "IFG7",
                      "lane": 1
                     }
                  }
                 ],
                "transceiver": [
                  {
                   "id": {
                      "chip": "eth1/22",
                      "lane": 1
                    }
                  }
                 ]
               }
           }
         }
    },
    "175": {
        "mapping": {
          "id": 175,
          "name": "eth1/22/3",
          "controllingPort": 173,
          "pins": [
            {
              "a": {
                "chip": "IFG7",
                "lane": 2
              },
              "z": {
                "end": {
                  "chip": "eth1/22",
                  "lane": 2
                }
              }
            }
          ]
         },
         "supportedProfiles": {
          "11": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "IFG7",
                      "lane": 2
                     }
                  }
                 ],
                "transceiver": [
                  {
                   "id": {
                      "chip": "eth1/22",
                      "lane": 2
                    }
                  }
                 ]
               }
           },
          "14": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "IFG7",
                      "lane": 2
                     }
                  }
                 ],
                "transceiver": [
                  {
                   "id": {
                      "chip": "eth1/22",
                      "lane": 2
                    }
                  }
                 ]
               }
           },
          "19": {
              "subsumedPorts": [
                176
              ],
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "IFG7",
                      "lane": 2
                     }
                  },
                  {
                    "id": {
                      "chip": "IFG7",
                      "lane": 3
                     }
                  }
                 ],
                "transceiver": [
                  {
                   "id": {
                      "chip": "eth1/22",
                      "lane": 2
                    }
                  },
                  {
                   "id": {
                      "chip": "eth1/22",
                      "lane": 3
                    }
                  }
                 ]
               }
           }
         }
    },
    "176": {
        "mapping": {
          "id": 176,
          "name": "eth1/22/4",
          "controllingPort": 173,
          "pins": [
            {
              "a": {
                "chip": "IFG7",
                "lane": 3
              },
              "z": {
                "end": {
                  "chip": "eth1/22",
                  "lane": 3
                }
              }
            }
          ]
         },
         "supportedProfiles": {
          "11": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "IFG7",
                      "lane": 3
                     }
                  }
                 ],
                "transceiver": [
                  {
                   "id": {
                      "chip": "eth1/22",
                      "lane": 3
                    }
                  }
                 ]
               }
           },
          "14": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "IFG7",
                      "lane": 3
                     }
                  }
                 ],
                "transceiver": [
                  {
                   "id": {
                      "chip": "eth1/22",
                      "lane": 3
                    }
                  }
                 ]
               }
           }
         }
    },
    "177": {
        "mapping": {
          "id": 177,
          "name": "eth1/23/1",
          "controllingPort": 177,
          "pins": [
            {
              "a": {
                "chip": "IFG6",
                "lane": 4
              },
              "z": {
                "end": {
                  "chip": "eth1/23",
                  "lane": 0
                }
              }
            }
          ]
         },
         "supportedProfiles": {
          "11": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "IFG6",
                      "lane": 4
                     }
                  }
                 ],
                "transceiver": [
                  {
                   "id": {
                      "chip": "eth1/23",
                      "lane": 0
                    }
                  }
                 ]
               }
           },
          "14": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "IFG6",
                      "lane": 4
                     }
                  }
                 ],
                "transceiver": [
                  {
                   "id": {
                      "chip": "eth1/23",
                      "lane": 0
                    }
                  }
                 ]
               }
           },
          "17": {
              "subsumedPorts": [
                178,
                179,
                180
              ],
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "IFG6",
                      "lane": 4
                     }
                  },
                  {
                    "id": {
                      "chip": "IFG6",
                      "lane": 5
                     }
                  },
                  {
                    "id": {
                      "chip": "IFG6",
                      "lane": 6
                     }
                  },
                  {
                    "id": {
                      "chip": "IFG6",
                      "lane": 7
                     }
                  }
                 ],
                "transceiver": [
                  {
                   "id": {
                      "chip": "eth1/23",
                      "lane": 0
                    }
                  },
                  {
                   "id": {
                      "chip": "eth1/23",
                      "lane": 1
                    }
                  },
                  {
                   "id": {
                      "chip": "eth1/23",
                      "lane": 2
                    }
                  },
                  {
                   "id": {
                      "chip": "eth1/23",
                      "lane": 3
                    }
                  }
                 ]
               }
           },
          "19": {
              "subsumedPorts": [
                178
              ],
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "IFG6",
                      "lane": 4
                     }
                  },
                  {
                    "id": {
                      "chip": "IFG6",
                      "lane": 5
                     }
                  }
                 ],
                "transceiver": [
                  {
                   "id": {
                      "chip": "eth1/23",
                      "lane": 0
                    }
                  },
                  {
                   "id": {
                      "chip": "eth1/23",
                      "lane": 1
                    }
                  }
                 ]
               }
           },
          "22": {
              "subsumedPorts": [
                178,
                179,
                180
              ],
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "IFG6",
                      "lane": 4
                     }
                  },
                  {
                    "id": {
                      "chip": "IFG6",
                      "lane": 5
                     }
                  },
                  {
                    "id": {
                      "chip": "IFG6",
                      "lane": 6
                     }
                  },
                  {
                    "id": {
                      "chip": "IFG6",
                      "lane": 7
                     }
                  }
                 ],
                "transceiver": [
                  {
                   "id": {
                      "chip": "eth1/23",
                      "lane": 0
                    }
                  },
                  {
                   "id": {
                      "chip": "eth1/23",
                      "lane": 1
                    }
                  },
                  {
                   "id": {
                      "chip": "eth1/23",
                      "lane": 2
                    }
                  },
                  {
                   "id": {
                      "chip": "eth1/23",
                      "lane": 3
                    }
                  }
                 ]
               }
           },
          "24": {
              "subsumedPorts": [
                178,
                179,
                180
              ],
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "IFG6",
                      "lane": 4
                     }
                  },
                  {
                    "id": {
                      "chip": "IFG6",
                      "lane": 5
                     }
                  },
                  {
                    "id": {
                      "chip": "IFG6",
                      "lane": 6
                     }
                  },
                  {
                    "id": {
                      "chip": "IFG6",
                      "lane": 7
                     }
                  }
                 ],
                "transceiver": [
                  {
                   "id": {
                      "chip": "eth1/23",
                      "lane": 0
                    }
                  },
                  {
                   "id": {
                      "chip": "eth1/23",
                      "lane": 1
                    }
                  },
                  {
                   "id": {
                      "chip": "eth1/23",
                      "lane": 2
                    }
                  },
                  {
                   "id": {
                      "chip": "eth1/23",
                      "lane": 3
                    }
                  }
                 ]
               }
           }
         }
    },
    "178": {
        "mapping": {
          "id": 178,
          "name": "eth1/23/2",
          "controllingPort": 177,
          "pins": [
            {
              "a": {
                "chip": "IFG6",
                "lane": 5
              },
              "z": {
                "end": {
                  "chip": "eth1/23",
                  "lane": 1
                }
              }
            }
          ]
         },
         "supportedProfiles": {
          "11": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "IFG6",
                      "lane": 5
                     }
                  }
                 ],
                "transceiver": [
                  {
                   "id": {
                      "chip": "eth1/23",
                      "lane": 1
                    }
                  }
                 ]
               }
           },
          "14": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "IFG6",
                      "lane": 5
                     }
                  }
                 ],
                "transceiver": [
                  {
                   "id": {
                      "chip": "eth1/23",
                      "lane": 1
                    }
                  }
                 ]
               }
           }
         }
    },
    "179": {
        "mapping": {
          "id": 179,
          "name": "eth1/23/3",
          "controllingPort": 177,
          "pins": [
            {
              "a": {
                "chip": "IFG6",
                "lane": 6
              },
              "z": {
                "end": {
                  "chip": "eth1/23",
                  "lane": 2
                }
              }
            }
          ]
         },
         "supportedProfiles": {
          "11": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "IFG6",
                      "lane": 6
                     }
                  }
                 ],
                "transceiver": [
                  {
                   "id": {
                      "chip": "eth1/23",
                      "lane": 2
                    }
                  }
                 ]
               }
           },
          "14": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "IFG6",
                      "lane": 6
                     }
                  }
                 ],
                "transceiver": [
                  {
                   "id": {
                      "chip": "eth1/23",
                      "lane": 2
                    }
                  }
                 ]
               }
           },
          "19": {
              "subsumedPorts": [
                180
              ],
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "IFG6",
                      "lane": 6
                     }
                  },
                  {
                    "id": {
                      "chip": "IFG6",
                      "lane": 7
                     }
                  }
                 ],
                "transceiver": [
                  {
                   "id": {
                      "chip": "eth1/23",
                      "lane": 2
                    }
                  },
                  {
                   "id": {
                      "chip": "eth1/23",
                      "lane": 3
                    }
                  }
                 ]
               }
           }
         }
    },
    "180": {
        "mapping": {
          "id": 180,
          "name": "eth1/23/4",
          "controllingPort": 177,
          "pins": [
            {
              "a": {
                "chip": "IFG6",
                "lane": 7
              },
              "z": {
                "end": {
                  "chip": "eth1/23",
                  "lane": 3
                }
              }
            }
          ]
         },
         "supportedProfiles": {
          "11": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "IFG6",
                      "lane": 7
                     }
                  }
                 ],
                "transceiver": [
                  {
                   "id": {
                      "chip": "eth1/23",
                      "lane": 3
                    }
                  }
                 ]
               }
           },
          "14": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "IFG6",
                      "lane": 7
                     }
                  }
                 ],
                "transceiver": [
                  {
                   "id": {
                      "chip": "eth1/23",
                      "lane": 3
                    }
                  }
                 ]
               }
           }
         }
    },
    "181": {
        "mapping": {
          "id": 181,
          "name": "eth1/23/1",
          "controllingPort": 181,
          "pins": [
            {
              "a": {
                "chip": "IFG6",
                "lane": 0
              },
              "z": {
                "end": {
                  "chip": "eth1/23",
                  "lane": 0
                }
              }
            }
          ]
         },
         "supportedProfiles": {
          "11": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "IFG6",
                      "lane": 0
                     }
                  }
                 ],
                "transceiver": [
                  {
                   "id": {
                      "chip": "eth1/23",
                      "lane": 0
                    }
                  }
                 ]
               }
           },
          "14": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "IFG6",
                      "lane": 0
                     }
                  }
                 ],
                "transceiver": [
                  {
                   "id": {
                      "chip": "eth1/23",
                      "lane": 0
                    }
                  }
                 ]
               }
           },
          "17": {
              "subsumedPorts": [
                182,
                183,
                184
              ],
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "IFG6",
                      "lane": 0
                     }
                  },
                  {
                    "id": {
                      "chip": "IFG6",
                      "lane": 1
                     }
                  },
                  {
                    "id": {
                      "chip": "IFG6",
                      "lane": 2
                     }
                  },
                  {
                    "id": {
                      "chip": "IFG6",
                      "lane": 3
                     }
                  }
                 ],
                "transceiver": [
                  {
                   "id": {
                      "chip": "eth1/23",
                      "lane": 0
                    }
                  },
                  {
                   "id": {
                      "chip": "eth1/23",
                      "lane": 1
                    }
                  },
                  {
                   "id": {
                      "chip": "eth1/23",
                      "lane": 2
                    }
                  },
                  {
                   "id": {
                      "chip": "eth1/23",
                      "lane": 3
                    }
                  }
                 ]
               }
           },
          "19": {
              "subsumedPorts": [
                182
              ],
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "IFG6",
                      "lane": 0
                     }
                  },
                  {
                    "id": {
                      "chip": "IFG6",
                      "lane": 1
                     }
                  }
                 ],
                "transceiver": [
                  {
                   "id": {
                      "chip": "eth1/23",
                      "lane": 0
                    }
                  },
                  {
                   "id": {
                      "chip": "eth1/23",
                      "lane": 1
                    }
                  }
                 ]
               }
           },
          "22": {
              "subsumedPorts": [
                182,
                183,
                184
              ],
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "IFG6",
                      "lane": 0
                     }
                  },
                  {
                    "id": {
                      "chip": "IFG6",
                      "lane": 1
                     }
                  },
                  {
                    "id": {
                      "chip": "IFG6",
                      "lane": 2
                     }
                  },
                  {
                    "id": {
                      "chip": "IFG6",
                      "lane": 3
                     }
                  }
                 ],
                "transceiver": [
                  {
                   "id": {
                      "chip": "eth1/23",
                      "lane": 0
                    }
                  },
                  {
                   "id": {
                      "chip": "eth1/23",
                      "lane": 1
                    }
                  },
                  {
                   "id": {
                      "chip": "eth1/23",
                      "lane": 2
                    }
                  },
                  {
                   "id": {
                      "chip": "eth1/23",
                      "lane": 3
                    }
                  }
                 ]
               }
           },
          "24": {
              "subsumedPorts": [
                182,
                183,
                184
              ],
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "IFG6",
                      "lane": 0
                     }
                  },
                  {
                    "id": {
                      "chip": "IFG6",
                      "lane": 1
                     }
                  },
                  {
                    "id": {
                      "chip": "IFG6",
                      "lane": 2
                     }
                  },
                  {
                    "id": {
                      "chip": "IFG6",
                      "lane": 3
                     }
                  }
                 ],
                "transceiver": [
                  {
                   "id": {
                      "chip": "eth1/23",
                      "lane": 0
                    }
                  },
                  {
                   "id": {
                      "chip": "eth1/23",
                      "lane": 1
                    }
                  },
                  {
                   "id": {
                      "chip": "eth1/23",
                      "lane": 2
                    }
                  },
                  {
                   "id": {
                      "chip": "eth1/23",
                      "lane": 3
                    }
                  }
                 ]
               }
           }
         }
    },
    "182": {
        "mapping": {
          "id": 182,
          "name": "eth1/23/2",
          "controllingPort": 181,
          "pins": [
            {
              "a": {
                "chip": "IFG6",
                "lane": 1
              },
              "z": {
                "end": {
                  "chip": "eth1/23",
                  "lane": 1
                }
              }
            }
          ]
         },
         "supportedProfiles": {
          "11": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "IFG6",
                      "lane": 1
                     }
                  }
                 ],
                "transceiver": [
                  {
                   "id": {
                      "chip": "eth1/23",
                      "lane": 1
                    }
                  }
                 ]
               }
           },
          "14": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "IFG6",
                      "lane": 1
                     }
                  }
                 ],
                "transceiver": [
                  {
                   "id": {
                      "chip": "eth1/23",
                      "lane": 1
                    }
                  }
                 ]
               }
           }
         }
    },
    "183": {
        "mapping": {
          "id": 183,
          "name": "eth1/23/3",
          "controllingPort": 181,
          "pins": [
            {
              "a": {
                "chip": "IFG6",
                "lane": 2
              },
              "z": {
                "end": {
                  "chip": "eth1/23",
                  "lane": 2
                }
              }
            }
          ]
         },
         "supportedProfiles": {
          "11": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "IFG6",
                      "lane": 2
                     }
                  }
                 ],
                "transceiver": [
                  {
                   "id": {
                      "chip": "eth1/23",
                      "lane": 2
                    }
                  }
                 ]
               }
           },
          "14": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "IFG6",
                      "lane": 2
                     }
                  }
                 ],
                "transceiver": [
                  {
                   "id": {
                      "chip": "eth1/23",
                      "lane": 2
                    }
                  }
                 ]
               }
           },
          "19": {
              "subsumedPorts": [
                184
              ],
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "IFG6",
                      "lane": 2
                     }
                  },
                  {
                    "id": {
                      "chip": "IFG6",
                      "lane": 3
                     }
                  }
                 ],
                "transceiver": [
                  {
                   "id": {
                      "chip": "eth1/23",
                      "lane": 2
                    }
                  },
                  {
                   "id": {
                      "chip": "eth1/23",
                      "lane": 3
                    }
                  }
                 ]
               }
           }
         }
    },
    "184": {
        "mapping": {
          "id": 184,
          "name": "eth1/23/4",
          "controllingPort": 181,
          "pins": [
            {
              "a": {
                "chip": "IFG6",
                "lane": 3
              },
              "z": {
                "end": {
                  "chip": "eth1/23",
                  "lane": 3
                }
              }
            }
          ]
         },
         "supportedProfiles": {
          "11": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "IFG6",
                      "lane": 3
                     }
                  }
                 ],
                "transceiver": [
                  {
                   "id": {
                      "chip": "eth1/23",
                      "lane": 3
                    }
                  }
                 ]
               }
           },
          "14": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "IFG6",
                      "lane": 3
                     }
                  }
                 ],
                "transceiver": [
                  {
                   "id": {
                      "chip": "eth1/23",
                      "lane": 3
                    }
                  }
                 ]
               }
           }
         }
    },
    "185": {
        "mapping": {
          "id": 185,
          "name": "eth1/24/1",
          "controllingPort": 185,
          "pins": [
            {
              "a": {
                "chip": "IFG6",
                "lane": 20
              },
              "z": {
                "end": {
                  "chip": "eth1/24",
                  "lane": 0
                }
              }
            }
          ]
         },
         "supportedProfiles": {
          "11": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "IFG6",
                      "lane": 20
                     }
                  }
                 ],
                "transceiver": [
                  {
                   "id": {
                      "chip": "eth1/24",
                      "lane": 0
                    }
                  }
                 ]
               }
           },
          "14": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "IFG6",
                      "lane": 20
                     }
                  }
                 ],
                "transceiver": [
                  {
                   "id": {
                      "chip": "eth1/24",
                      "lane": 0
                    }
                  }
                 ]
               }
           },
          "17": {
              "subsumedPorts": [
                186,
                187,
                188
              ],
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "IFG6",
                      "lane": 20
                     }
                  },
                  {
                    "id": {
                      "chip": "IFG6",
                      "lane": 21
                     }
                  },
                  {
                    "id": {
                      "chip": "IFG6",
                      "lane": 22
                     }
                  },
                  {
                    "id": {
                      "chip": "IFG6",
                      "lane": 23
                     }
                  }
                 ],
                "transceiver": [
                  {
                   "id": {
                      "chip": "eth1/24",
                      "lane": 0
                    }
                  },
                  {
                   "id": {
                      "chip": "eth1/24",
                      "lane": 1
                    }
                  },
                  {
                   "id": {
                      "chip": "eth1/24",
                      "lane": 2
                    }
                  },
                  {
                   "id": {
                      "chip": "eth1/24",
                      "lane": 3
                    }
                  }
                 ]
               }
           },
          "19": {
              "subsumedPorts": [
                186
              ],
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "IFG6",
                      "lane": 20
                     }
                  },
                  {
                    "id": {
                      "chip": "IFG6",
                      "lane": 21
                     }
                  }
                 ],
                "transceiver": [
                  {
                   "id": {
                      "chip": "eth1/24",
                      "lane": 0
                    }
                  },
                  {
                   "id": {
                      "chip": "eth1/24",
                      "lane": 1
                    }
                  }
                 ]
               }
           },
          "22": {
              "subsumedPorts": [
                186,
                187,
                188
              ],
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "IFG6",
                      "lane": 20
                     }
                  },
                  {
                    "id": {
                      "chip": "IFG6",
                      "lane": 21
                     }
                  },
                  {
                    "id": {
                      "chip": "IFG6",
                      "lane": 22
                     }
                  },
                  {
                    "id": {
                      "chip": "IFG6",
                      "lane": 23
                     }
                  }
                 ],
                "transceiver": [
                  {
                   "id": {
                      "chip": "eth1/24",
                      "lane": 0
                    }
                  },
                  {
                   "id": {
                      "chip": "eth1/24",
                      "lane": 1
                    }
                  },
                  {
                   "id": {
                      "chip": "eth1/24",
                      "lane": 2
                    }
                  },
                  {
                   "id": {
                      "chip": "eth1/24",
                      "lane": 3
                    }
                  }
                 ]
               }
           },
          "24": {
              "subsumedPorts": [
                186,
                187,
                188
              ],
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "IFG6",
                      "lane": 20
                     }
                  },
                  {
                    "id": {
                      "chip": "IFG6",
                      "lane": 21
                     }
                  },
                  {
                    "id": {
                      "chip": "IFG6",
                      "lane": 22
                     }
                  },
                  {
                    "id": {
                      "chip": "IFG6",
                      "lane": 23
                     }
                  }
                 ],
                "transceiver": [
                  {
                   "id": {
                      "chip": "eth1/24",
                      "lane": 0
                    }
                  },
                  {
                   "id": {
                      "chip": "eth1/24",
                      "lane": 1
                    }
                  },
                  {
                   "id": {
                      "chip": "eth1/24",
                      "lane": 2
                    }
                  },
                  {
                   "id": {
                      "chip": "eth1/24",
                      "lane": 3
                    }
                  }
                 ]
               }
           }
         }
    },
    "186": {
        "mapping": {
          "id": 186,
          "name": "eth1/24/2",
          "controllingPort": 185,
          "pins": [
            {
              "a": {
                "chip": "IFG6",
                "lane": 21
              },
              "z": {
                "end": {
                  "chip": "eth1/24",
                  "lane": 1
                }
              }
            }
          ]
         },
         "supportedProfiles": {
          "11": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "IFG6",
                      "lane": 21
                     }
                  }
                 ],
                "transceiver": [
                  {
                   "id": {
                      "chip": "eth1/24",
                      "lane": 1
                    }
                  }
                 ]
               }
           },
          "14": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "IFG6",
                      "lane": 21
                     }
                  }
                 ],
                "transceiver": [
                  {
                   "id": {
                      "chip": "eth1/24",
                      "lane": 1
                    }
                  }
                 ]
               }
           }
         }
    },
    "187": {
        "mapping": {
          "id": 187,
          "name": "eth1/24/3",
          "controllingPort": 185,
          "pins": [
            {
              "a": {
                "chip": "IFG6",
                "lane": 22
              },
              "z": {
                "end": {
                  "chip": "eth1/24",
                  "lane": 2
                }
              }
            }
          ]
         },
         "supportedProfiles": {
          "11": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "IFG6",
                      "lane": 22
                     }
                  }
                 ],
                "transceiver": [
                  {
                   "id": {
                      "chip": "eth1/24",
                      "lane": 2
                    }
                  }
                 ]
               }
           },
          "14": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "IFG6",
                      "lane": 22
                     }
                  }
                 ],
                "transceiver": [
                  {
                   "id": {
                      "chip": "eth1/24",
                      "lane": 2
                    }
                  }
                 ]
               }
           },
          "19": {
              "subsumedPorts": [
                188
              ],
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "IFG6",
                      "lane": 22
                     }
                  },
                  {
                    "id": {
                      "chip": "IFG6",
                      "lane": 23
                     }
                  }
                 ],
                "transceiver": [
                  {
                   "id": {
                      "chip": "eth1/24",
                      "lane": 2
                    }
                  },
                  {
                   "id": {
                      "chip": "eth1/24",
                      "lane": 3
                    }
                  }
                 ]
               }
           }
         }
    },
    "188": {
        "mapping": {
          "id": 188,
          "name": "eth1/24/4",
          "controllingPort": 185,
          "pins": [
            {
              "a": {
                "chip": "IFG6",
                "lane": 23
              },
              "z": {
                "end": {
                  "chip": "eth1/24",
                  "lane": 3
                }
              }
            }
          ]
         },
         "supportedProfiles": {
          "11": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "IFG6",
                      "lane": 23
                     }
                  }
                 ],
                "transceiver": [
                  {
                   "id": {
                      "chip": "eth1/24",
                      "lane": 3
                    }
                  }
                 ]
               }
           },
          "14": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "IFG6",
                      "lane": 23
                     }
                  }
                 ],
                "transceiver": [
                  {
                   "id": {
                      "chip": "eth1/24",
                      "lane": 3
                    }
                  }
                 ]
               }
           }
         }
    },
    "189": {
        "mapping": {
          "id": 189,
          "name": "eth1/24/1",
          "controllingPort": 189,
          "pins": [
            {
              "a": {
                "chip": "IFG6",
                "lane": 16
              },
              "z": {
                "end": {
                  "chip": "eth1/24",
                  "lane": 0
                }
              }
            }
          ]
         },
         "supportedProfiles": {
          "11": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "IFG6",
                      "lane": 16
                     }
                  }
                 ],
                "transceiver": [
                  {
                   "id": {
                      "chip": "eth1/24",
                      "lane": 0
                    }
                  }
                 ]
               }
           },
          "14": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "IFG6",
                      "lane": 16
                     }
                  }
                 ],
                "transceiver": [
                  {
                   "id": {
                      "chip": "eth1/24",
                      "lane": 0
                    }
                  }
                 ]
               }
           },
          "17": {
              "subsumedPorts": [
                190,
                191,
                192
              ],
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "IFG6",
                      "lane": 16
                     }
                  },
                  {
                    "id": {
                      "chip": "IFG6",
                      "lane": 17
                     }
                  },
                  {
                    "id": {
                      "chip": "IFG6",
                      "lane": 18
                     }
                  },
                  {
                    "id": {
                      "chip": "IFG6",
                      "lane": 19
                     }
                  }
                 ],
                "transceiver": [
                  {
                   "id": {
                      "chip": "eth1/24",
                      "lane": 0
                    }
                  },
                  {
                   "id": {
                      "chip": "eth1/24",
                      "lane": 1
                    }
                  },
                  {
                   "id": {
                      "chip": "eth1/24",
                      "lane": 2
                    }
                  },
                  {
                   "id": {
                      "chip": "eth1/24",
                      "lane": 3
                    }
                  }
                 ]
               }
           },
          "19": {
              "subsumedPorts": [
                190
              ],
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "IFG6",
                      "lane": 16
                     }
                  },
                  {
                    "id": {
                      "chip": "IFG6",
                      "lane": 17
                     }
                  }
                 ],
                "transceiver": [
                  {
                   "id": {
                      "chip": "eth1/24",
                      "lane": 0
                    }
                  },
                  {
                   "id": {
                      "chip": "eth1/24",
                      "lane": 1
                    }
                  }
                 ]
               }
           },
          "22": {
              "subsumedPorts": [
                190,
                191,
                192
              ],
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "IFG6",
                      "lane": 16
                     }
                  },
                  {
                    "id": {
                      "chip": "IFG6",
                      "lane": 17
                     }
                  },
                  {
                    "id": {
                      "chip": "IFG6",
                      "lane": 18
                     }
                  },
                  {
                    "id": {
                      "chip": "IFG6",
                      "lane": 19
                     }
                  }
                 ],
                "transceiver": [
                  {
                   "id": {
                      "chip": "eth1/24",
                      "lane": 0
                    }
                  },
                  {
                   "id": {
                      "chip": "eth1/24",
                      "lane": 1
                    }
                  },
                  {
                   "id": {
                      "chip": "eth1/24",
                      "lane": 2
                    }
                  },
                  {
                   "id": {
                      "chip": "eth1/24",
                      "lane": 3
                    }
                  }
                 ]
               }
           },
          "24": {
              "subsumedPorts": [
                190,
                191,
                192
              ],
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "IFG6",
                      "lane": 16
                     }
                  },
                  {
                    "id": {
                      "chip": "IFG6",
                      "lane": 17
                     }
                  },
                  {
                    "id": {
                      "chip": "IFG6",
                      "lane": 18
                     }
                  },
                  {
                    "id": {
                      "chip": "IFG6",
                      "lane": 19
                     }
                  }
                 ],
                "transceiver": [
                  {
                   "id": {
                      "chip": "eth1/24",
                      "lane": 0
                    }
                  },
                  {
                   "id": {
                      "chip": "eth1/24",
                      "lane": 1
                    }
                  },
                  {
                   "id": {
                      "chip": "eth1/24",
                      "lane": 2
                    }
                  },
                  {
                   "id": {
                      "chip": "eth1/24",
                      "lane": 3
                    }
                  }
                 ]
               }
           }
         }
    },
    "190": {
        "mapping": {
          "id": 190,
          "name": "eth1/24/2",
          "controllingPort": 189,
          "pins": [
            {
              "a": {
                "chip": "IFG6",
                "lane": 17
              },
              "z": {
                "end": {
                  "chip": "eth1/24",
                  "lane": 1
                }
              }
            }
          ]
         },
         "supportedProfiles": {
          "11": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "IFG6",
                      "lane": 17
                     }
                  }
                 ],
                "transceiver": [
                  {
                   "id": {
                      "chip": "eth1/24",
                      "lane": 1
                    }
                  }
                 ]
               }
           },
          "14": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "IFG6",
                      "lane": 17
                     }
                  }
                 ],
                "transceiver": [
                  {
                   "id": {
                      "chip": "eth1/24",
                      "lane": 1
                    }
                  }
                 ]
               }
           }
         }
    },
    "191": {
        "mapping": {
          "id": 191,
          "name": "eth1/24/3",
          "controllingPort": 189,
          "pins": [
            {
              "a": {
                "chip": "IFG6",
                "lane": 18
              },
              "z": {
                "end": {
                  "chip": "eth1/24",
                  "lane": 2
                }
              }
            }
          ]
         },
         "supportedProfiles": {
          "11": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "IFG6",
                      "lane": 18
                     }
                  }
                 ],
                "transceiver": [
                  {
                   "id": {
                      "chip": "eth1/24",
                      "lane": 2
                    }
                  }
                 ]
               }
           },
          "14": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "IFG6",
                      "lane": 18
                     }
                  }
                 ],
                "transceiver": [
                  {
                   "id": {
                      "chip": "eth1/24",
                      "lane": 2
                    }
                  }
                 ]
               }
           },
          "19": {
              "subsumedPorts": [
                192
              ],
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "IFG6",
                      "lane": 18
                     }
                  },
                  {
                    "id": {
                      "chip": "IFG6",
                      "lane": 19
                     }
                  }
                 ],
                "transceiver": [
                  {
                   "id": {
                      "chip": "eth1/24",
                      "lane": 2
                    }
                  },
                  {
                   "id": {
                      "chip": "eth1/24",
                      "lane": 3
                    }
                  }
                 ]
               }
           }
         }
    },
    "192": {
        "mapping": {
          "id": 192,
          "name": "eth1/24/4",
          "controllingPort": 189,
          "pins": [
            {
              "a": {
                "chip": "IFG6",
                "lane": 19
              },
              "z": {
                "end": {
                  "chip": "eth1/24",
                  "lane": 3
                }
              }
            }
          ]
         },
         "supportedProfiles": {
          "11": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "IFG6",
                      "lane": 19
                     }
                  }
                 ],
                "transceiver": [
                  {
                   "id": {
                      "chip": "eth1/24",
                      "lane": 3
                    }
                  }
                 ]
               }
           },
          "14": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "IFG6",
                      "lane": 19
                     }
                  }
                 ],
                "transceiver": [
                  {
                   "id": {
                      "chip": "eth1/24",
                      "lane": 3
                    }
                  }
                 ]
               }
           }
         }
    },
    "193": {
        "mapping": {
          "id": 193,
          "name": "eth1/25/1",
          "controllingPort": 193,
          "pins": [
            {
              "a": {
                "chip": "IFG5",
                "lane": 8
              },
              "z": {
                "end": {
                  "chip": "eth1/25",
                  "lane": 0
                }
              }
            }
          ]
         },
         "supportedProfiles": {
          "11": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "IFG5",
                      "lane": 8
                     }
                  }
                 ],
                "transceiver": [
                  {
                   "id": {
                      "chip": "eth1/25",
                      "lane": 0
                    }
                  }
                 ]
               }
           },
          "14": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "IFG5",
                      "lane": 8
                     }
                  }
                 ],
                "transceiver": [
                  {
                   "id": {
                      "chip": "eth1/25",
                      "lane": 0
                    }
                  }
                 ]
               }
           },
          "17": {
              "subsumedPorts": [
                194,
                195,
                196
              ],
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "IFG5",
                      "lane": 8
                     }
                  },
                  {
                    "id": {
                      "chip": "IFG5",
                      "lane": 9
                     }
                  },
                  {
                    "id": {
                      "chip": "IFG5",
                      "lane": 10
                     }
                  },
                  {
                    "id": {
                      "chip": "IFG5",
                      "lane": 11
                     }
                  }
                 ],
                "transceiver": [
                  {
                   "id": {
                      "chip": "eth1/25",
                      "lane": 0
                    }
                  },
                  {
                   "id": {
                      "chip": "eth1/25",
                      "lane": 1
                    }
                  },
                  {
                   "id": {
                      "chip": "eth1/25",
                      "lane": 2
                    }
                  },
                  {
                   "id": {
                      "chip": "eth1/25",
                      "lane": 3
                    }
                  }
                 ]
               }
           },
          "19": {
              "subsumedPorts": [
                194
              ],
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "IFG5",
                      "lane": 8
                     }
                  },
                  {
                    "id": {
                      "chip": "IFG5",
                      "lane": 9
                     }
                  }
                 ],
                "transceiver": [
                  {
                   "id": {
                      "chip": "eth1/25",
                      "lane": 0
                    }
                  },
                  {
                   "id": {
                      "chip": "eth1/25",
                      "lane": 1
                    }
                  }
                 ]
               }
           },
          "22": {
              "subsumedPorts": [
                194,
                195,
                196
              ],
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "IFG5",
                      "lane": 8
                     }
                  },
                  {
                    "id": {
                      "chip": "IFG5",
                      "lane": 9
                     }
                  },
                  {
                    "id": {
                      "chip": "IFG5",
                      "lane": 10
                     }
                  },
                  {
                    "id": {
                      "chip": "IFG5",
                      "lane": 11
                     }
                  }
                 ],
                "transceiver": [
                  {
                   "id": {
                      "chip": "eth1/25",
                      "lane": 0
                    }
                  },
                  {
                   "id": {
                      "chip": "eth1/25",
                      "lane": 1
                    }
                  },
                  {
                   "id": {
                      "chip": "eth1/25",
                      "lane": 2
                    }
                  },
                  {
                   "id": {
                      "chip": "eth1/25",
                      "lane": 3
                    }
                  }
                 ]
               }
           },
          "24": {
              "subsumedPorts": [
                194,
                195,
                196
              ],
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "IFG5",
                      "lane": 8
                     }
                  },
                  {
                    "id": {
                      "chip": "IFG5",
                      "lane": 9
                     }
                  },
                  {
                    "id": {
                      "chip": "IFG5",
                      "lane": 10
                     }
                  },
                  {
                    "id": {
                      "chip": "IFG5",
                      "lane": 11
                     }
                  }
                 ],
                "transceiver": [
                  {
                   "id": {
                      "chip": "eth1/25",
                      "lane": 0
                    }
                  },
                  {
                   "id": {
                      "chip": "eth1/25",
                      "lane": 1
                    }
                  },
                  {
                   "id": {
                      "chip": "eth1/25",
                      "lane": 2
                    }
                  },
                  {
                   "id": {
                      "chip": "eth1/25",
                      "lane": 3
                    }
                  }
                 ]
               }
           }
         }
    },
    "194": {
        "mapping": {
          "id": 194,
          "name": "eth1/25/2",
          "controllingPort": 193,
          "pins": [
            {
              "a": {
                "chip": "IFG5",
                "lane": 9
              },
              "z": {
                "end": {
                  "chip": "eth1/25",
                  "lane": 1
                }
              }
            }
          ]
         },
         "supportedProfiles": {
          "11": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "IFG5",
                      "lane": 9
                     }
                  }
                 ],
                "transceiver": [
                  {
                   "id": {
                      "chip": "eth1/25",
                      "lane": 1
                    }
                  }
                 ]
               }
           },
          "14": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "IFG5",
                      "lane": 9
                     }
                  }
                 ],
                "transceiver": [
                  {
                   "id": {
                      "chip": "eth1/25",
                      "lane": 1
                    }
                  }
                 ]
               }
           }
         }
    },
    "195": {
        "mapping": {
          "id": 195,
          "name": "eth1/25/3",
          "controllingPort": 193,
          "pins": [
            {
              "a": {
                "chip": "IFG5",
                "lane": 10
              },
              "z": {
                "end": {
                  "chip": "eth1/25",
                  "lane": 2
                }
              }
            }
          ]
         },
         "supportedProfiles": {
          "11": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "IFG5",
                      "lane": 10
                     }
                  }
                 ],
                "transceiver": [
                  {
                   "id": {
                      "chip": "eth1/25",
                      "lane": 2
                    }
                  }
                 ]
               }
           },
          "14": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "IFG5",
                      "lane": 10
                     }
                  }
                 ],
                "transceiver": [
                  {
                   "id": {
                      "chip": "eth1/25",
                      "lane": 2
                    }
                  }
                 ]
               }
           },
          "19": {
              "subsumedPorts": [
                196
              ],
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "IFG5",
                      "lane": 10
                     }
                  },
                  {
                    "id": {
                      "chip": "IFG5",
                      "lane": 11
                     }
                  }
                 ],
                "transceiver": [
                  {
                   "id": {
                      "chip": "eth1/25",
                      "lane": 2
                    }
                  },
                  {
                   "id": {
                      "chip": "eth1/25",
                      "lane": 3
                    }
                  }
                 ]
               }
           }
         }
    },
    "196": {
        "mapping": {
          "id": 196,
          "name": "eth1/25/4",
          "controllingPort": 193,
          "pins": [
            {
              "a": {
                "chip": "IFG5",
                "lane": 11
              },
              "z": {
                "end": {
                  "chip": "eth1/25",
                  "lane": 3
                }
              }
            }
          ]
         },
         "supportedProfiles": {
          "11": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "IFG5",
                      "lane": 11
                     }
                  }
                 ],
                "transceiver": [
                  {
                   "id": {
                      "chip": "eth1/25",
                      "lane": 3
                    }
                  }
                 ]
               }
           },
          "14": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "IFG5",
                      "lane": 11
                     }
                  }
                 ],
                "transceiver": [
                  {
                   "id": {
                      "chip": "eth1/25",
                      "lane": 3
                    }
                  }
                 ]
               }
           }
         }
    },
    "197": {
        "mapping": {
          "id": 197,
          "name": "eth1/25/1",
          "controllingPort": 197,
          "pins": [
            {
              "a": {
                "chip": "IFG5",
                "lane": 12
              },
              "z": {
                "end": {
                  "chip": "eth1/25",
                  "lane": 0
                }
              }
            }
          ]
         },
         "supportedProfiles": {
          "11": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "IFG5",
                      "lane": 12
                     }
                  }
                 ],
                "transceiver": [
                  {
                   "id": {
                      "chip": "eth1/25",
                      "lane": 0
                    }
                  }
                 ]
               }
           },
          "14": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "IFG5",
                      "lane": 12
                     }
                  }
                 ],
                "transceiver": [
                  {
                   "id": {
                      "chip": "eth1/25",
                      "lane": 0
                    }
                  }
                 ]
               }
           },
          "17": {
              "subsumedPorts": [
                198,
                199,
                200
              ],
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "IFG5",
                      "lane": 12
                     }
                  },
                  {
                    "id": {
                      "chip": "IFG5",
                      "lane": 13
                     }
                  },
                  {
                    "id": {
                      "chip": "IFG5",
                      "lane": 14
                     }
                  },
                  {
                    "id": {
                      "chip": "IFG5",
                      "lane": 15
                     }
                  }
                 ],
                "transceiver": [
                  {
                   "id": {
                      "chip": "eth1/25",
                      "lane": 0
                    }
                  },
                  {
                   "id": {
                      "chip": "eth1/25",
                      "lane": 1
                    }
                  },
                  {
                   "id": {
                      "chip": "eth1/25",
                      "lane": 2
                    }
                  },
                  {
                   "id": {
                      "chip": "eth1/25",
                      "lane": 3
                    }
                  }
                 ]
               }
           },
          "19": {
              "subsumedPorts": [
                198
              ],
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "IFG5",
                      "lane": 12
                     }
                  },
                  {
                    "id": {
                      "chip": "IFG5",
                      "lane": 13
                     }
                  }
                 ],
                "transceiver": [
                  {
                   "id": {
                      "chip": "eth1/25",
                      "lane": 0
                    }
                  },
                  {
                   "id": {
                      "chip": "eth1/25",
                      "lane": 1
                    }
                  }
                 ]
               }
           },
          "22": {
              "subsumedPorts": [
                198,
                199,
                200
              ],
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "IFG5",
                      "lane": 12
                     }
                  },
                  {
                    "id": {
                      "chip": "IFG5",
                      "lane": 13
                     }
                  },
                  {
                    "id": {
                      "chip": "IFG5",
                      "lane": 14
                     }
                  },
                  {
                    "id": {
                      "chip": "IFG5",
                      "lane": 15
                     }
                  }
                 ],
                "transceiver": [
                  {
                   "id": {
                      "chip": "eth1/25",
                      "lane": 0
                    }
                  },
                  {
                   "id": {
                      "chip": "eth1/25",
                      "lane": 1
                    }
                  },
                  {
                   "id": {
                      "chip": "eth1/25",
                      "lane": 2
                    }
                  },
                  {
                   "id": {
                      "chip": "eth1/25",
                      "lane": 3
                    }
                  }
                 ]
               }
           },
          "24": {
              "subsumedPorts": [
                198,
                199,
                200
              ],
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "IFG5",
                      "lane": 12
                     }
                  },
                  {
                    "id": {
                      "chip": "IFG5",
                      "lane": 13
                     }
                  },
                  {
                    "id": {
                      "chip": "IFG5",
                      "lane": 14
                     }
                  },
                  {
                    "id": {
                      "chip": "IFG5",
                      "lane": 15
                     }
                  }
                 ],
                "transceiver": [
                  {
                   "id": {
                      "chip": "eth1/25",
                      "lane": 0
                    }
                  },
                  {
                   "id": {
                      "chip": "eth1/25",
                      "lane": 1
                    }
                  },
                  {
                   "id": {
                      "chip": "eth1/25",
                      "lane": 2
                    }
                  },
                  {
                   "id": {
                      "chip": "eth1/25",
                      "lane": 3
                    }
                  }
                 ]
               }
           }
         }
    },
    "198": {
        "mapping": {
          "id": 198,
          "name": "eth1/25/2",
          "controllingPort": 197,
          "pins": [
            {
              "a": {
                "chip": "IFG5",
                "lane": 13
              },
              "z": {
                "end": {
                  "chip": "eth1/25",
                  "lane": 1
                }
              }
            }
          ]
         },
         "supportedProfiles": {
          "11": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "IFG5",
                      "lane": 13
                     }
                  }
                 ],
                "transceiver": [
                  {
                   "id": {
                      "chip": "eth1/25",
                      "lane": 1
                    }
                  }
                 ]
               }
           },
          "14": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "IFG5",
                      "lane": 13
                     }
                  }
                 ],
                "transceiver": [
                  {
                   "id": {
                      "chip": "eth1/25",
                      "lane": 1
                    }
                  }
                 ]
               }
           }
         }
    },
    "199": {
        "mapping": {
          "id": 199,
          "name": "eth1/25/3",
          "controllingPort": 197,
          "pins": [
            {
              "a": {
                "chip": "IFG5",
                "lane": 14
              },
              "z": {
                "end": {
                  "chip": "eth1/25",
                  "lane": 2
                }
              }
            }
          ]
         },
         "supportedProfiles": {
          "11": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "IFG5",
                      "lane": 14
                     }
                  }
                 ],
                "transceiver": [
                  {
                   "id": {
                      "chip": "eth1/25",
                      "lane": 2
                    }
                  }
                 ]
               }
           },
          "14": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "IFG5",
                      "lane": 14
                     }
                  }
                 ],
                "transceiver": [
                  {
                   "id": {
                      "chip": "eth1/25",
                      "lane": 2
                    }
                  }
                 ]
               }
           },
          "19": {
              "subsumedPorts": [
                200
              ],
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "IFG5",
                      "lane": 14
                     }
                  },
                  {
                    "id": {
                      "chip": "IFG5",
                      "lane": 15
                     }
                  }
                 ],
                "transceiver": [
                  {
                   "id": {
                      "chip": "eth1/25",
                      "lane": 2
                    }
                  },
                  {
                   "id": {
                      "chip": "eth1/25",
                      "lane": 3
                    }
                  }
                 ]
               }
           }
         }
    },
    "200": {
        "mapping": {
          "id": 200,
          "name": "eth1/25/4",
          "controllingPort": 197,
          "pins": [
            {
              "a": {
                "chip": "IFG5",
                "lane": 15
              },
              "z": {
                "end": {
                  "chip": "eth1/25",
                  "lane": 3
                }
              }
            }
          ]
         },
         "supportedProfiles": {
          "11": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "IFG5",
                      "lane": 15
                     }
                  }
                 ],
                "transceiver": [
                  {
                   "id": {
                      "chip": "eth1/25",
                      "lane": 3
                    }
                  }
                 ]
               }
           },
          "14": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "IFG5",
                      "lane": 15
                     }
                  }
                 ],
                "transceiver": [
                  {
                   "id": {
                      "chip": "eth1/25",
                      "lane": 3
                    }
                  }
                 ]
               }
           }
         }
    },
    "201": {
        "mapping": {
          "id": 201,
          "name": "eth1/26/1",
          "controllingPort": 201,
          "pins": [
            {
              "a": {
                "chip": "IFG4",
                "lane": 8
              },
              "z": {
                "end": {
                  "chip": "eth1/26",
                  "lane": 0
                }
              }
            }
          ]
         },
         "supportedProfiles": {
          "11": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "IFG4",
                      "lane": 8
                     }
                  }
                 ],
                "transceiver": [
                  {
                   "id": {
                      "chip": "eth1/26",
                      "lane": 0
                    }
                  }
                 ]
               }
           },
          "14": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "IFG4",
                      "lane": 8
                     }
                  }
                 ],
                "transceiver": [
                  {
                   "id": {
                      "chip": "eth1/26",
                      "lane": 0
                    }
                  }
                 ]
               }
           },
          "17": {
              "subsumedPorts": [
                202,
                203,
                204
              ],
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "IFG4",
                      "lane": 8
                     }
                  },
                  {
                    "id": {
                      "chip": "IFG4",
                      "lane": 9
                     }
                  },
                  {
                    "id": {
                      "chip": "IFG4",
                      "lane": 10
                     }
                  },
                  {
                    "id": {
                      "chip": "IFG4",
                      "lane": 11
                     }
                  }
                 ],
                "transceiver": [
                  {
                   "id": {
                      "chip": "eth1/26",
                      "lane": 0
                    }
                  },
                  {
                   "id": {
                      "chip": "eth1/26",
                      "lane": 1
                    }
                  },
                  {
                   "id": {
                      "chip": "eth1/26",
                      "lane": 2
                    }
                  },
                  {
                   "id": {
                      "chip": "eth1/26",
                      "lane": 3
                    }
                  }
                 ]
               }
           },
          "19": {
              "subsumedPorts": [
                202
              ],
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "IFG4",
                      "lane": 8
                     }
                  },
                  {
                    "id": {
                      "chip": "IFG4",
                      "lane": 9
                     }
                  }
                 ],
                "transceiver": [
                  {
                   "id": {
                      "chip": "eth1/26",
                      "lane": 0
                    }
                  },
                  {
                   "id": {
                      "chip": "eth1/26",
                      "lane": 1
                    }
                  }
                 ]
               }
           },
          "22": {
              "subsumedPorts": [
                202,
                203,
                204
              ],
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "IFG4",
                      "lane": 8
                     }
                  },
                  {
                    "id": {
                      "chip": "IFG4",
                      "lane": 9
                     }
                  },
                  {
                    "id": {
                      "chip": "IFG4",
                      "lane": 10
                     }
                  },
                  {
                    "id": {
                      "chip": "IFG4",
                      "lane": 11
                     }
                  }
                 ],
                "transceiver": [
                  {
                   "id": {
                      "chip": "eth1/26",
                      "lane": 0
                    }
                  },
                  {
                   "id": {
                      "chip": "eth1/26",
                      "lane": 1
                    }
                  },
                  {
                   "id": {
                      "chip": "eth1/26",
                      "lane": 2
                    }
                  },
                  {
                   "id": {
                      "chip": "eth1/26",
                      "lane": 3
                    }
                  }
                 ]
               }
           },
          "24": {
              "subsumedPorts": [
                202,
                203,
                204
              ],
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "IFG4",
                      "lane": 8
                     }
                  },
                  {
                    "id": {
                      "chip": "IFG4",
                      "lane": 9
                     }
                  },
                  {
                    "id": {
                      "chip": "IFG4",
                      "lane": 10
                     }
                  },
                  {
                    "id": {
                      "chip": "IFG4",
                      "lane": 11
                     }
                  }
                 ],
                "transceiver": [
                  {
                   "id": {
                      "chip": "eth1/26",
                      "lane": 0
                    }
                  },
                  {
                   "id": {
                      "chip": "eth1/26",
                      "lane": 1
                    }
                  },
                  {
                   "id": {
                      "chip": "eth1/26",
                      "lane": 2
                    }
                  },
                  {
                   "id": {
                      "chip": "eth1/26",
                      "lane": 3
                    }
                  }
                 ]
               }
           }
         }
    },
    "202": {
        "mapping": {
          "id": 202,
          "name": "eth1/26/2",
          "controllingPort": 201,
          "pins": [
            {
              "a": {
                "chip": "IFG4",
                "lane": 9
              },
              "z": {
                "end": {
                  "chip": "eth1/26",
                  "lane": 1
                }
              }
            }
          ]
         },
         "supportedProfiles": {
          "11": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "IFG4",
                      "lane": 9
                     }
                  }
                 ],
                "transceiver": [
                  {
                   "id": {
                      "chip": "eth1/26",
                      "lane": 1
                    }
                  }
                 ]
               }
           },
          "14": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "IFG4",
                      "lane": 9
                     }
                  }
                 ],
                "transceiver": [
                  {
                   "id": {
                      "chip": "eth1/26",
                      "lane": 1
                    }
                  }
                 ]
               }
           }
         }
    },
    "203": {
        "mapping": {
          "id": 203,
          "name": "eth1/26/3",
          "controllingPort": 201,
          "pins": [
            {
              "a": {
                "chip": "IFG4",
                "lane": 10
              },
              "z": {
                "end": {
                  "chip": "eth1/26",
                  "lane": 2
                }
              }
            }
          ]
         },
         "supportedProfiles": {
          "11": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "IFG4",
                      "lane": 10
                     }
                  }
                 ],
                "transceiver": [
                  {
                   "id": {
                      "chip": "eth1/26",
                      "lane": 2
                    }
                  }
                 ]
               }
           },
          "14": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "IFG4",
                      "lane": 10
                     }
                  }
                 ],
                "transceiver": [
                  {
                   "id": {
                      "chip": "eth1/26",
                      "lane": 2
                    }
                  }
                 ]
               }
           },
          "19": {
              "subsumedPorts": [
                204
              ],
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "IFG4",
                      "lane": 10
                     }
                  },
                  {
                    "id": {
                      "chip": "IFG4",
                      "lane": 11
                     }
                  }
                 ],
                "transceiver": [
                  {
                   "id": {
                      "chip": "eth1/26",
                      "lane": 2
                    }
                  },
                  {
                   "id": {
                      "chip": "eth1/26",
                      "lane": 3
                    }
                  }
                 ]
               }
           }
         }
    },
    "204": {
        "mapping": {
          "id": 204,
          "name": "eth1/26/4",
          "controllingPort": 201,
          "pins": [
            {
              "a": {
                "chip": "IFG4",
                "lane": 11
              },
              "z": {
                "end": {
                  "chip": "eth1/26",
                  "lane": 3
                }
              }
            }
          ]
         },
         "supportedProfiles": {
          "11": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "IFG4",
                      "lane": 11
                     }
                  }
                 ],
                "transceiver": [
                  {
                   "id": {
                      "chip": "eth1/26",
                      "lane": 3
                    }
                  }
                 ]
               }
           },
          "14": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "IFG4",
                      "lane": 11
                     }
                  }
                 ],
                "transceiver": [
                  {
                   "id": {
                      "chip": "eth1/26",
                      "lane": 3
                    }
                  }
                 ]
               }
           }
         }
    },
    "205": {
        "mapping": {
          "id": 205,
          "name": "eth1/26/1",
          "controllingPort": 205,
          "pins": [
            {
              "a": {
                "chip": "IFG4",
                "lane": 12
              },
              "z": {
                "end": {
                  "chip": "eth1/26",
                  "lane": 0
                }
              }
            }
          ]
         },
         "supportedProfiles": {
          "11": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "IFG4",
                      "lane": 12
                     }
                  }
                 ],
                "transceiver": [
                  {
                   "id": {
                      "chip": "eth1/26",
                      "lane": 0
                    }
                  }
                 ]
               }
           },
          "14": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "IFG4",
                      "lane": 12
                     }
                  }
                 ],
                "transceiver": [
                  {
                   "id": {
                      "chip": "eth1/26",
                      "lane": 0
                    }
                  }
                 ]
               }
           },
          "17": {
              "subsumedPorts": [
                206,
                207,
                208
              ],
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "IFG4",
                      "lane": 12
                     }
                  },
                  {
                    "id": {
                      "chip": "IFG4",
                      "lane": 13
                     }
                  },
                  {
                    "id": {
                      "chip": "IFG4",
                      "lane": 14
                     }
                  },
                  {
                    "id": {
                      "chip": "IFG4",
                      "lane": 15
                     }
                  }
                 ],
                "transceiver": [
                  {
                   "id": {
                      "chip": "eth1/26",
                      "lane": 0
                    }
                  },
                  {
                   "id": {
                      "chip": "eth1/26",
                      "lane": 1
                    }
                  },
                  {
                   "id": {
                      "chip": "eth1/26",
                      "lane": 2
                    }
                  },
                  {
                   "id": {
                      "chip": "eth1/26",
                      "lane": 3
                    }
                  }
                 ]
               }
           },
          "19": {
              "subsumedPorts": [
                206
              ],
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "IFG4",
                      "lane": 12
                     }
                  },
                  {
                    "id": {
                      "chip": "IFG4",
                      "lane": 13
                     }
                  }
                 ],
                "transceiver": [
                  {
                   "id": {
                      "chip": "eth1/26",
                      "lane": 0
                    }
                  },
                  {
                   "id": {
                      "chip": "eth1/26",
                      "lane": 1
                    }
                  }
                 ]
               }
           },
          "22": {
              "subsumedPorts": [
                206,
                207,
                208
              ],
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "IFG4",
                      "lane": 12
                     }
                  },
                  {
                    "id": {
                      "chip": "IFG4",
                      "lane": 13
                     }
                  },
                  {
                    "id": {
                      "chip": "IFG4",
                      "lane": 14
                     }
                  },
                  {
                    "id": {
                      "chip": "IFG4",
                      "lane": 15
                     }
                  }
                 ],
                "transceiver": [
                  {
                   "id": {
                      "chip": "eth1/26",
                      "lane": 0
                    }
                  },
                  {
                   "id": {
                      "chip": "eth1/26",
                      "lane": 1
                    }
                  },
                  {
                   "id": {
                      "chip": "eth1/26",
                      "lane": 2
                    }
                  },
                  {
                   "id": {
                      "chip": "eth1/26",
                      "lane": 3
                    }
                  }
                 ]
               }
           },
          "24": {
              "subsumedPorts": [
                206,
                207,
                208
              ],
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "IFG4",
                      "lane": 12
                     }
                  },
                  {
                    "id": {
                      "chip": "IFG4",
                      "lane": 13
                     }
                  },
                  {
                    "id": {
                      "chip": "IFG4",
                      "lane": 14
                     }
                  },
                  {
                    "id": {
                      "chip": "IFG4",
                      "lane": 15
                     }
                  }
                 ],
                "transceiver": [
                  {
                   "id": {
                      "chip": "eth1/26",
                      "lane": 0
                    }
                  },
                  {
                   "id": {
                      "chip": "eth1/26",
                      "lane": 1
                    }
                  },
                  {
                   "id": {
                      "chip": "eth1/26",
                      "lane": 2
                    }
                  },
                  {
                   "id": {
                      "chip": "eth1/26",
                      "lane": 3
                    }
                  }
                 ]
               }
           }
         }
    },
    "206": {
        "mapping": {
          "id": 206,
          "name": "eth1/26/2",
          "controllingPort": 205,
          "pins": [
            {
              "a": {
                "chip": "IFG4",
                "lane": 13
              },
              "z": {
                "end": {
                  "chip": "eth1/26",
                  "lane": 1
                }
              }
            }
          ]
         },
         "supportedProfiles": {
          "11": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "IFG4",
                      "lane": 13
                     }
                  }
                 ],
                "transceiver": [
                  {
                   "id": {
                      "chip": "eth1/26",
                      "lane": 1
                    }
                  }
                 ]
               }
           },
          "14": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "IFG4",
                      "lane": 13
                     }
                  }
                 ],
                "transceiver": [
                  {
                   "id": {
                      "chip": "eth1/26",
                      "lane": 1
                    }
                  }
                 ]
               }
           }
         }
    },
    "207": {
        "mapping": {
          "id": 207,
          "name": "eth1/26/3",
          "controllingPort": 205,
          "pins": [
            {
              "a": {
                "chip": "IFG4",
                "lane": 14
              },
              "z": {
                "end": {
                  "chip": "eth1/26",
                  "lane": 2
                }
              }
            }
          ]
         },
         "supportedProfiles": {
          "11": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "IFG4",
                      "lane": 14
                     }
                  }
                 ],
                "transceiver": [
                  {
                   "id": {
                      "chip": "eth1/26",
                      "lane": 2
                    }
                  }
                 ]
               }
           },
          "14": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "IFG4",
                      "lane": 14
                     }
                  }
                 ],
                "transceiver": [
                  {
                   "id": {
                      "chip": "eth1/26",
                      "lane": 2
                    }
                  }
                 ]
               }
           },
          "19": {
              "subsumedPorts": [
                208
              ],
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "IFG4",
                      "lane": 14
                     }
                  },
                  {
                    "id": {
                      "chip": "IFG4",
                      "lane": 15
                     }
                  }
                 ],
                "transceiver": [
                  {
                   "id": {
                      "chip": "eth1/26",
                      "lane": 2
                    }
                  },
                  {
                   "id": {
                      "chip": "eth1/26",
                      "lane": 3
                    }
                  }
                 ]
               }
           }
         }
    },
    "208": {
        "mapping": {
          "id": 208,
          "name": "eth1/26/4",
          "controllingPort": 205,
          "pins": [
            {
              "a": {
                "chip": "IFG4",
                "lane": 15
              },
              "z": {
                "end": {
                  "chip": "eth1/26",
                  "lane": 3
                }
              }
            }
          ]
         },
         "supportedProfiles": {
          "11": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "IFG4",
                      "lane": 15
                     }
                  }
                 ],
                "transceiver": [
                  {
                   "id": {
                      "chip": "eth1/26",
                      "lane": 3
                    }
                  }
                 ]
               }
           },
          "14": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "IFG4",
                      "lane": 15
                     }
                  }
                 ],
                "transceiver": [
                  {
                   "id": {
                      "chip": "eth1/26",
                      "lane": 3
                    }
                  }
                 ]
               }
           }
         }
    },
    "209": {
        "mapping": {
          "id": 209,
          "name": "eth1/27/1",
          "controllingPort": 209,
          "pins": [
            {
              "a": {
                "chip": "IFG4",
                "lane": 4
              },
              "z": {
                "end": {
                  "chip": "eth1/27",
                  "lane": 0
                }
              }
            }
          ]
         },
         "supportedProfiles": {
          "11": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "IFG4",
                      "lane": 4
                     }
                  }
                 ],
                "transceiver": [
                  {
                   "id": {
                      "chip": "eth1/27",
                      "lane": 0
                    }
                  }
                 ]
               }
           },
          "14": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "IFG4",
                      "lane": 4
                     }
                  }
                 ],
                "transceiver": [
                  {
                   "id": {
                      "chip": "eth1/27",
                      "lane": 0
                    }
                  }
                 ]
               }
           },
          "17": {
              "subsumedPorts": [
                210,
                211,
                212
              ],
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "IFG4",
                      "lane": 4
                     }
                  },
                  {
                    "id": {
                      "chip": "IFG4",
                      "lane": 5
                     }
                  },
                  {
                    "id": {
                      "chip": "IFG4",
                      "lane": 6
                     }
                  },
                  {
                    "id": {
                      "chip": "IFG4",
                      "lane": 7
                     }
                  }
                 ],
                "transceiver": [
                  {
                   "id": {
                      "chip": "eth1/27",
                      "lane": 0
                    }
                  },
                  {
                   "id": {
                      "chip": "eth1/27",
                      "lane": 1
                    }
                  },
                  {
                   "id": {
                      "chip": "eth1/27",
                      "lane": 2
                    }
                  },
                  {
                   "id": {
                      "chip": "eth1/27",
                      "lane": 3
                    }
                  }
                 ]
               }
           },
          "19": {
              "subsumedPorts": [
                210
              ],
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "IFG4",
                      "lane": 4
                     }
                  },
                  {
                    "id": {
                      "chip": "IFG4",
                      "lane": 5
                     }
                  }
                 ],
                "transceiver": [
                  {
                   "id": {
                      "chip": "eth1/27",
                      "lane": 0
                    }
                  },
                  {
                   "id": {
                      "chip": "eth1/27",
                      "lane": 1
                    }
                  }
                 ]
               }
           },
          "22": {
              "subsumedPorts": [
                210,
                211,
                212
              ],
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "IFG4",
                      "lane": 4
                     }
                  },
                  {
                    "id": {
                      "chip": "IFG4",
                      "lane": 5
                     }
                  },
                  {
                    "id": {
                      "chip": "IFG4",
                      "lane": 6
                     }
                  },
                  {
                    "id": {
                      "chip": "IFG4",
                      "lane": 7
                     }
                  }
                 ],
                "transceiver": [
                  {
                   "id": {
                      "chip": "eth1/27",
                      "lane": 0
                    }
                  },
                  {
                   "id": {
                      "chip": "eth1/27",
                      "lane": 1
                    }
                  },
                  {
                   "id": {
                      "chip": "eth1/27",
                      "lane": 2
                    }
                  },
                  {
                   "id": {
                      "chip": "eth1/27",
                      "lane": 3
                    }
                  }
                 ]
               }
           },
          "24": {
              "subsumedPorts": [
                210,
                211,
                212
              ],
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "IFG4",
                      "lane": 4
                     }
                  },
                  {
                    "id": {
                      "chip": "IFG4",
                      "lane": 5
                     }
                  },
                  {
                    "id": {
                      "chip": "IFG4",
                      "lane": 6
                     }
                  },
                  {
                    "id": {
                      "chip": "IFG4",
                      "lane": 7
                     }
                  }
                 ],
                "transceiver": [
                  {
                   "id": {
                      "chip": "eth1/27",
                      "lane": 0
                    }
                  },
                  {
                   "id": {
                      "chip": "eth1/27",
                      "lane": 1
                    }
                  },
                  {
                   "id": {
                      "chip": "eth1/27",
                      "lane": 2
                    }
                  },
                  {
                   "id": {
                      "chip": "eth1/27",
                      "lane": 3
                    }
                  }
                 ]
               }
           }
         }
    },
    "210": {
        "mapping": {
          "id": 210,
          "name": "eth1/27/2",
          "controllingPort": 209,
          "pins": [
            {
              "a": {
                "chip": "IFG4",
                "lane": 5
              },
              "z": {
                "end": {
                  "chip": "eth1/27",
                  "lane": 1
                }
              }
            }
          ]
         },
         "supportedProfiles": {
          "11": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "IFG4",
                      "lane": 5
                     }
                  }
                 ],
                "transceiver": [
                  {
                   "id": {
                      "chip": "eth1/27",
                      "lane": 1
                    }
                  }
                 ]
               }
           },
          "14": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "IFG4",
                      "lane": 5
                     }
                  }
                 ],
                "transceiver": [
                  {
                   "id": {
                      "chip": "eth1/27",
                      "lane": 1
                    }
                  }
                 ]
               }
           }
         }
    },
    "211": {
        "mapping": {
          "id": 211,
          "name": "eth1/27/3",
          "controllingPort": 209,
          "pins": [
            {
              "a": {
                "chip": "IFG4",
                "lane": 6
              },
              "z": {
                "end": {
                  "chip": "eth1/27",
                  "lane": 2
                }
              }
            }
          ]
         },
         "supportedProfiles": {
          "11": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "IFG4",
                      "lane": 6
                     }
                  }
                 ],
                "transceiver": [
                  {
                   "id": {
                      "chip": "eth1/27",
                      "lane": 2
                    }
                  }
                 ]
               }
           },
          "14": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "IFG4",
                      "lane": 6
                     }
                  }
                 ],
                "transceiver": [
                  {
                   "id": {
                      "chip": "eth1/27",
                      "lane": 2
                    }
                  }
                 ]
               }
           },
          "19": {
              "subsumedPorts": [
                212
              ],
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "IFG4",
                      "lane": 6
                     }
                  },
                  {
                    "id": {
                      "chip": "IFG4",
                      "lane": 7
                     }
                  }
                 ],
                "transceiver": [
                  {
                   "id": {
                      "chip": "eth1/27",
                      "lane": 2
                    }
                  },
                  {
                   "id": {
                      "chip": "eth1/27",
                      "lane": 3
                    }
                  }
                 ]
               }
           }
         }
    },
    "212": {
        "mapping": {
          "id": 212,
          "name": "eth1/27/4",
          "controllingPort": 209,
          "pins": [
            {
              "a": {
                "chip": "IFG4",
                "lane": 7
              },
              "z": {
                "end": {
                  "chip": "eth1/27",
                  "lane": 3
                }
              }
            }
          ]
         },
         "supportedProfiles": {
          "11": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "IFG4",
                      "lane": 7
                     }
                  }
                 ],
                "transceiver": [
                  {
                   "id": {
                      "chip": "eth1/27",
                      "lane": 3
                    }
                  }
                 ]
               }
           },
          "14": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "IFG4",
                      "lane": 7
                     }
                  }
                 ],
                "transceiver": [
                  {
                   "id": {
                      "chip": "eth1/27",
                      "lane": 3
                    }
                  }
                 ]
               }
           }
         }
    },
    "213": {
        "mapping": {
          "id": 213,
          "name": "eth1/27/1",
          "controllingPort": 213,
          "pins": [
            {
              "a": {
                "chip": "IFG4",
                "lane": 0
              },
              "z": {
                "end": {
                  "chip": "eth1/27",
                  "lane": 0
                }
              }
            }
          ]
         },
         "supportedProfiles": {
          "11": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "IFG4",
                      "lane": 0
                     }
                  }
                 ],
                "transceiver": [
                  {
                   "id": {
                      "chip": "eth1/27",
                      "lane": 0
                    }
                  }
                 ]
               }
           },
          "14": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "IFG4",
                      "lane": 0
                     }
                  }
                 ],
                "transceiver": [
                  {
                   "id": {
                      "chip": "eth1/27",
                      "lane": 0
                    }
                  }
                 ]
               }
           },
          "17": {
              "subsumedPorts": [
                214,
                215,
                216
              ],
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "IFG4",
                      "lane": 0
                     }
                  },
                  {
                    "id": {
                      "chip": "IFG4",
                      "lane": 1
                     }
                  },
                  {
                    "id": {
                      "chip": "IFG4",
                      "lane": 2
                     }
                  },
                  {
                    "id": {
                      "chip": "IFG4",
                      "lane": 3
                     }
                  }
                 ],
                "transceiver": [
                  {
                   "id": {
                      "chip": "eth1/27",
                      "lane": 0
                    }
                  },
                  {
                   "id": {
                      "chip": "eth1/27",
                      "lane": 1
                    }
                  },
                  {
                   "id": {
                      "chip": "eth1/27",
                      "lane": 2
                    }
                  },
                  {
                   "id": {
                      "chip": "eth1/27",
                      "lane": 3
                    }
                  }
                 ]
               }
           },
          "19": {
              "subsumedPorts": [
                214
              ],
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "IFG4",
                      "lane": 0
                     }
                  },
                  {
                    "id": {
                      "chip": "IFG4",
                      "lane": 1
                     }
                  }
                 ],
                "transceiver": [
                  {
                   "id": {
                      "chip": "eth1/27",
                      "lane": 0
                    }
                  },
                  {
                   "id": {
                      "chip": "eth1/27",
                      "lane": 1
                    }
                  }
                 ]
               }
           },
          "22": {
              "subsumedPorts": [
                214,
                215,
                216
              ],
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "IFG4",
                      "lane": 0
                     }
                  },
                  {
                    "id": {
                      "chip": "IFG4",
                      "lane": 1
                     }
                  },
                  {
                    "id": {
                      "chip": "IFG4",
                      "lane": 2
                     }
                  },
                  {
                    "id": {
                      "chip": "IFG4",
                      "lane": 3
                     }
                  }
                 ],
                "transceiver": [
                  {
                   "id": {
                      "chip": "eth1/27",
                      "lane": 0
                    }
                  },
                  {
                   "id": {
                      "chip": "eth1/27",
                      "lane": 1
                    }
                  },
                  {
                   "id": {
                      "chip": "eth1/27",
                      "lane": 2
                    }
                  },
                  {
                   "id": {
                      "chip": "eth1/27",
                      "lane": 3
                    }
                  }
                 ]
               }
           },
          "24": {
              "subsumedPorts": [
                214,
                215,
                216
              ],
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "IFG4",
                      "lane": 0
                     }
                  },
                  {
                    "id": {
                      "chip": "IFG4",
                      "lane": 1
                     }
                  },
                  {
                    "id": {
                      "chip": "IFG4",
                      "lane": 2
                     }
                  },
                  {
                    "id": {
                      "chip": "IFG4",
                      "lane": 3
                     }
                  }
                 ],
                "transceiver": [
                  {
                   "id": {
                      "chip": "eth1/27",
                      "lane": 0
                    }
                  },
                  {
                   "id": {
                      "chip": "eth1/27",
                      "lane": 1
                    }
                  },
                  {
                   "id": {
                      "chip": "eth1/27",
                      "lane": 2
                    }
                  },
                  {
                   "id": {
                      "chip": "eth1/27",
                      "lane": 3
                    }
                  }
                 ]
               }
           }
         }
    },
    "214": {
        "mapping": {
          "id": 214,
          "name": "eth1/27/2",
          "controllingPort": 213,
          "pins": [
            {
              "a": {
                "chip": "IFG4",
                "lane": 1
              },
              "z": {
                "end": {
                  "chip": "eth1/27",
                  "lane": 1
                }
              }
            }
          ]
         },
         "supportedProfiles": {
          "11": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "IFG4",
                      "lane": 1
                     }
                  }
                 ],
                "transceiver": [
                  {
                   "id": {
                      "chip": "eth1/27",
                      "lane": 1
                    }
                  }
                 ]
               }
           },
          "14": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "IFG4",
                      "lane": 1
                     }
                  }
                 ],
                "transceiver": [
                  {
                   "id": {
                      "chip": "eth1/27",
                      "lane": 1
                    }
                  }
                 ]
               }
           }
         }
    },
    "215": {
        "mapping": {
          "id": 215,
          "name": "eth1/27/3",
          "controllingPort": 213,
          "pins": [
            {
              "a": {
                "chip": "IFG4",
                "lane": 2
              },
              "z": {
                "end": {
                  "chip": "eth1/27",
                  "lane": 2
                }
              }
            }
          ]
         },
         "supportedProfiles": {
          "11": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "IFG4",
                      "lane": 2
                     }
                  }
                 ],
                "transceiver": [
                  {
                   "id": {
                      "chip": "eth1/27",
                      "lane": 2
                    }
                  }
                 ]
               }
           },
          "14": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "IFG4",
                      "lane": 2
                     }
                  }
                 ],
                "transceiver": [
                  {
                   "id": {
                      "chip": "eth1/27",
                      "lane": 2
                    }
                  }
                 ]
               }
           },
          "19": {
              "subsumedPorts": [
                216
              ],
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "IFG4",
                      "lane": 2
                     }
                  },
                  {
                    "id": {
                      "chip": "IFG4",
                      "lane": 3
                     }
                  }
                 ],
                "transceiver": [
                  {
                   "id": {
                      "chip": "eth1/27",
                      "lane": 2
                    }
                  },
                  {
                   "id": {
                      "chip": "eth1/27",
                      "lane": 3
                    }
                  }
                 ]
               }
           }
         }
    },
    "216": {
        "mapping": {
          "id": 216,
          "name": "eth1/27/4",
          "controllingPort": 213,
          "pins": [
            {
              "a": {
                "chip": "IFG4",
                "lane": 3
              },
              "z": {
                "end": {
                  "chip": "eth1/27",
                  "lane": 3
                }
              }
            }
          ]
         },
         "supportedProfiles": {
          "11": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "IFG4",
                      "lane": 3
                     }
                  }
                 ],
                "transceiver": [
                  {
                   "id": {
                      "chip": "eth1/27",
                      "lane": 3
                    }
                  }
                 ]
               }
           },
          "14": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "IFG4",
                      "lane": 3
                     }
                  }
                 ],
                "transceiver": [
                  {
                   "id": {
                      "chip": "eth1/27",
                      "lane": 3
                    }
                  }
                 ]
               }
           }
         }
    },
    "217": {
        "mapping": {
          "id": 217,
          "name": "eth1/28/1",
          "controllingPort": 217,
          "pins": [
            {
              "a": {
                "chip": "IFG0",
                "lane": 0
              },
              "z": {
                "end": {
                  "chip": "eth1/28",
                  "lane": 0
                }
              }
            }
          ]
         },
         "supportedProfiles": {
          "11": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "IFG0",
                      "lane": 0
                     }
                  }
                 ],
                "transceiver": [
                  {
                   "id": {
                      "chip": "eth1/28",
                      "lane": 0
                    }
                  }
                 ]
               }
           },
          "14": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "IFG0",
                      "lane": 0
                     }
                  }
                 ],
                "transceiver": [
                  {
                   "id": {
                      "chip": "eth1/28",
                      "lane": 0
                    }
                  }
                 ]
               }
           },
          "17": {
              "subsumedPorts": [
                218,
                219,
                220
              ],
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "IFG0",
                      "lane": 0
                     }
                  },
                  {
                    "id": {
                      "chip": "IFG0",
                      "lane": 1
                     }
                  },
                  {
                    "id": {
                      "chip": "IFG0",
                      "lane": 2
                     }
                  },
                  {
                    "id": {
                      "chip": "IFG0",
                      "lane": 3
                     }
                  }
                 ],
                "transceiver": [
                  {
                   "id": {
                      "chip": "eth1/28",
                      "lane": 0
                    }
                  },
                  {
                   "id": {
                      "chip": "eth1/28",
                      "lane": 1
                    }
                  },
                  {
                   "id": {
                      "chip": "eth1/28",
                      "lane": 2
                    }
                  },
                  {
                   "id": {
                      "chip": "eth1/28",
                      "lane": 3
                    }
                  }
                 ]
               }
           },
          "19": {
              "subsumedPorts": [
                218
              ],
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "IFG0",
                      "lane": 0
                     }
                  },
                  {
                    "id": {
                      "chip": "IFG0",
                      "lane": 1
                     }
                  }
                 ],
                "transceiver": [
                  {
                   "id": {
                      "chip": "eth1/28",
                      "lane": 0
                    }
                  },
                  {
                   "id": {
                      "chip": "eth1/28",
                      "lane": 1
                    }
                  }
                 ]
               }
           },
          "22": {
              "subsumedPorts": [
                218,
                219,
                220
              ],
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "IFG0",
                      "lane": 0
                     }
                  },
                  {
                    "id": {
                      "chip": "IFG0",
                      "lane": 1
                     }
                  },
                  {
                    "id": {
                      "chip": "IFG0",
                      "lane": 2
                     }
                  },
                  {
                    "id": {
                      "chip": "IFG0",
                      "lane": 3
                     }
                  }
                 ],
                "transceiver": [
                  {
                   "id": {
                      "chip": "eth1/28",
                      "lane": 0
                    }
                  },
                  {
                   "id": {
                      "chip": "eth1/28",
                      "lane": 1
                    }
                  },
                  {
                   "id": {
                      "chip": "eth1/28",
                      "lane": 2
                    }
                  },
                  {
                   "id": {
                      "chip": "eth1/28",
                      "lane": 3
                    }
                  }
                 ]
               }
           },
          "24": {
              "subsumedPorts": [
                218,
                219,
                220
              ],
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "IFG0",
                      "lane": 0
                     }
                  },
                  {
                    "id": {
                      "chip": "IFG0",
                      "lane": 1
                     }
                  },
                  {
                    "id": {
                      "chip": "IFG0",
                      "lane": 2
                     }
                  },
                  {
                    "id": {
                      "chip": "IFG0",
                      "lane": 3
                     }
                  }
                 ],
                "transceiver": [
                  {
                   "id": {
                      "chip": "eth1/28",
                      "lane": 0
                    }
                  },
                  {
                   "id": {
                      "chip": "eth1/28",
                      "lane": 1
                    }
                  },
                  {
                   "id": {
                      "chip": "eth1/28",
                      "lane": 2
                    }
                  },
                  {
                   "id": {
                      "chip": "eth1/28",
                      "lane": 3
                    }
                  }
                 ]
               }
           }
         }
    },
    "218": {
        "mapping": {
          "id": 218,
          "name": "eth1/28/2",
          "controllingPort": 217,
          "pins": [
            {
              "a": {
                "chip": "IFG0",
                "lane": 1
              },
              "z": {
                "end": {
                  "chip": "eth1/28",
                  "lane": 1
                }
              }
            }
          ]
         },
         "supportedProfiles": {
          "11": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "IFG0",
                      "lane": 1
                     }
                  }
                 ],
                "transceiver": [
                  {
                   "id": {
                      "chip": "eth1/28",
                      "lane": 1
                    }
                  }
                 ]
               }
           },
          "14": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "IFG0",
                      "lane": 1
                     }
                  }
                 ],
                "transceiver": [
                  {
                   "id": {
                      "chip": "eth1/28",
                      "lane": 1
                    }
                  }
                 ]
               }
           }
         }
    },
    "219": {
        "mapping": {
          "id": 219,
          "name": "eth1/28/3",
          "controllingPort": 217,
          "pins": [
            {
              "a": {
                "chip": "IFG0",
                "lane": 2
              },
              "z": {
                "end": {
                  "chip": "eth1/28",
                  "lane": 2
                }
              }
            }
          ]
         },
         "supportedProfiles": {
          "11": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "IFG0",
                      "lane": 2
                     }
                  }
                 ],
                "transceiver": [
                  {
                   "id": {
                      "chip": "eth1/28",
                      "lane": 2
                    }
                  }
                 ]
               }
           },
          "14": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "IFG0",
                      "lane": 2
                     }
                  }
                 ],
                "transceiver": [
                  {
                   "id": {
                      "chip": "eth1/28",
                      "lane": 2
                    }
                  }
                 ]
               }
           },
          "19": {
              "subsumedPorts": [
                220
              ],
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "IFG0",
                      "lane": 2
                     }
                  },
                  {
                    "id": {
                      "chip": "IFG0",
                      "lane": 3
                     }
                  }
                 ],
                "transceiver": [
                  {
                   "id": {
                      "chip": "eth1/28",
                      "lane": 2
                    }
                  },
                  {
                   "id": {
                      "chip": "eth1/28",
                      "lane": 3
                    }
                  }
                 ]
               }
           }
         }
    },
    "220": {
        "mapping": {
          "id": 220,
          "name": "eth1/28/4",
          "controllingPort": 217,
          "pins": [
            {
              "a": {
                "chip": "IFG0",
                "lane": 3
              },
              "z": {
                "end": {
                  "chip": "eth1/28",
                  "lane": 3
                }
              }
            }
          ]
         },
         "supportedProfiles": {
          "11": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "IFG0",
                      "lane": 3
                     }
                  }
                 ],
                "transceiver": [
                  {
                   "id": {
                      "chip": "eth1/28",
                      "lane": 3
                    }
                  }
                 ]
               }
           },
          "14": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "IFG0",
                      "lane": 3
                     }
                  }
                 ],
                "transceiver": [
                  {
                   "id": {
                      "chip": "eth1/28",
                      "lane": 3
                    }
                  }
                 ]
               }
           }
         }
    },
    "221": {
        "mapping": {
          "id": 221,
          "name": "eth1/28/1",
          "controllingPort": 221,
          "pins": [
            {
              "a": {
                "chip": "IFG0",
                "lane": 4
              },
              "z": {
                "end": {
                  "chip": "eth1/28",
                  "lane": 0
                }
              }
            }
          ]
         },
         "supportedProfiles": {
          "11": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "IFG0",
                      "lane": 4
                     }
                  }
                 ],
                "transceiver": [
                  {
                   "id": {
                      "chip": "eth1/28",
                      "lane": 0
                    }
                  }
                 ]
               }
           },
          "14": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "IFG0",
                      "lane": 4
                     }
                  }
                 ],
                "transceiver": [
                  {
                   "id": {
                      "chip": "eth1/28",
                      "lane": 0
                    }
                  }
                 ]
               }
           },
          "17": {
              "subsumedPorts": [
                222,
                223,
                224
              ],
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "IFG0",
                      "lane": 4
                     }
                  },
                  {
                    "id": {
                      "chip": "IFG0",
                      "lane": 5
                     }
                  },
                  {
                    "id": {
                      "chip": "IFG0",
                      "lane": 6
                     }
                  },
                  {
                    "id": {
                      "chip": "IFG0",
                      "lane": 7
                     }
                  }
                 ],
                "transceiver": [
                  {
                   "id": {
                      "chip": "eth1/28",
                      "lane": 0
                    }
                  },
                  {
                   "id": {
                      "chip": "eth1/28",
                      "lane": 1
                    }
                  },
                  {
                   "id": {
                      "chip": "eth1/28",
                      "lane": 2
                    }
                  },
                  {
                   "id": {
                      "chip": "eth1/28",
                      "lane": 3
                    }
                  }
                 ]
               }
           },
          "19": {
              "subsumedPorts": [
                222
              ],
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "IFG0",
                      "lane": 4
                     }
                  },
                  {
                    "id": {
                      "chip": "IFG0",
                      "lane": 5
                     }
                  }
                 ],
                "transceiver": [
                  {
                   "id": {
                      "chip": "eth1/28",
                      "lane": 0
                    }
                  },
                  {
                   "id": {
                      "chip": "eth1/28",
                      "lane": 1
                    }
                  }
                 ]
               }
           },
          "22": {
              "subsumedPorts": [
                222,
                223,
                224
              ],
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "IFG0",
                      "lane": 4
                     }
                  },
                  {
                    "id": {
                      "chip": "IFG0",
                      "lane": 5
                     }
                  },
                  {
                    "id": {
                      "chip": "IFG0",
                      "lane": 6
                     }
                  },
                  {
                    "id": {
                      "chip": "IFG0",
                      "lane": 7
                     }
                  }
                 ],
                "transceiver": [
                  {
                   "id": {
                      "chip": "eth1/28",
                      "lane": 0
                    }
                  },
                  {
                   "id": {
                      "chip": "eth1/28",
                      "lane": 1
                    }
                  },
                  {
                   "id": {
                      "chip": "eth1/28",
                      "lane": 2
                    }
                  },
                  {
                   "id": {
                      "chip": "eth1/28",
                      "lane": 3
                    }
                  }
                 ]
               }
           },
          "24": {
              "subsumedPorts": [
                222,
                223,
                224
              ],
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "IFG0",
                      "lane": 4
                     }
                  },
                  {
                    "id": {
                      "chip": "IFG0",
                      "lane": 5
                     }
                  },
                  {
                    "id": {
                      "chip": "IFG0",
                      "lane": 6
                     }
                  },
                  {
                    "id": {
                      "chip": "IFG0",
                      "lane": 7
                     }
                  }
                 ],
                "transceiver": [
                  {
                   "id": {
                      "chip": "eth1/28",
                      "lane": 0
                    }
                  },
                  {
                   "id": {
                      "chip": "eth1/28",
                      "lane": 1
                    }
                  },
                  {
                   "id": {
                      "chip": "eth1/28",
                      "lane": 2
                    }
                  },
                  {
                   "id": {
                      "chip": "eth1/28",
                      "lane": 3
                    }
                  }
                 ]
               }
           }
         }
    },
    "222": {
        "mapping": {
          "id": 222,
          "name": "eth1/28/2",
          "controllingPort": 221,
          "pins": [
            {
              "a": {
                "chip": "IFG0",
                "lane": 5
              },
              "z": {
                "end": {
                  "chip": "eth1/28",
                  "lane": 1
                }
              }
            }
          ]
         },
         "supportedProfiles": {
          "11": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "IFG0",
                      "lane": 5
                     }
                  }
                 ],
                "transceiver": [
                  {
                   "id": {
                      "chip": "eth1/28",
                      "lane": 1
                    }
                  }
                 ]
               }
           },
          "14": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "IFG0",
                      "lane": 5
                     }
                  }
                 ],
                "transceiver": [
                  {
                   "id": {
                      "chip": "eth1/28",
                      "lane": 1
                    }
                  }
                 ]
               }
           }
         }
    },
    "223": {
        "mapping": {
          "id": 223,
          "name": "eth1/28/3",
          "controllingPort": 221,
          "pins": [
            {
              "a": {
                "chip": "IFG0",
                "lane": 6
              },
              "z": {
                "end": {
                  "chip": "eth1/28",
                  "lane": 2
                }
              }
            }
          ]
         },
         "supportedProfiles": {
          "11": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "IFG0",
                      "lane": 6
                     }
                  }
                 ],
                "transceiver": [
                  {
                   "id": {
                      "chip": "eth1/28",
                      "lane": 2
                    }
                  }
                 ]
               }
           },
          "14": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "IFG0",
                      "lane": 6
                     }
                  }
                 ],
                "transceiver": [
                  {
                   "id": {
                      "chip": "eth1/28",
                      "lane": 2
                    }
                  }
                 ]
               }
           },
          "19": {
              "subsumedPorts": [
                224
              ],
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "IFG0",
                      "lane": 6
                     }
                  },
                  {
                    "id": {
                      "chip": "IFG0",
                      "lane": 7
                     }
                  }
                 ],
                "transceiver": [
                  {
                   "id": {
                      "chip": "eth1/28",
                      "lane": 2
                    }
                  },
                  {
                   "id": {
                      "chip": "eth1/28",
                      "lane": 3
                    }
                  }
                 ]
               }
           }
         }
    },
    "224": {
        "mapping": {
          "id": 224,
          "name": "eth1/28/4",
          "controllingPort": 221,
          "pins": [
            {
              "a": {
                "chip": "IFG0",
                "lane": 7
              },
              "z": {
                "end": {
                  "chip": "eth1/28",
                  "lane": 3
                }
              }
            }
          ]
         },
         "supportedProfiles": {
          "11": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "IFG0",
                      "lane": 7
                     }
                  }
                 ],
                "transceiver": [
                  {
                   "id": {
                      "chip": "eth1/28",
                      "lane": 3
                    }
                  }
                 ]
               }
           },
          "14": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "IFG0",
                      "lane": 7
                     }
                  }
                 ],
                "transceiver": [
                  {
                   "id": {
                      "chip": "eth1/28",
                      "lane": 3
                    }
                  }
                 ]
               }
           }
         }
    },
    "225": {
        "mapping": {
          "id": 225,
          "name": "eth1/29/1",
          "controllingPort": 225,
          "pins": [
            {
              "a": {
                "chip": "IFG3",
                "lane": 12
              },
              "z": {
                "end": {
                  "chip": "eth1/29",
                  "lane": 0
                }
              }
            }
          ]
         },
         "supportedProfiles": {
          "11": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "IFG3",
                      "lane": 12
                     }
                  }
                 ],
                "transceiver": [
                  {
                   "id": {
                      "chip": "eth1/29",
                      "lane": 0
                    }
                  }
                 ]
               }
           },
          "14": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "IFG3",
                      "lane": 12
                     }
                  }
                 ],
                "transceiver": [
                  {
                   "id": {
                      "chip": "eth1/29",
                      "lane": 0
                    }
                  }
                 ]
               }
           },
          "17": {
              "subsumedPorts": [
                226,
                227,
                228
              ],
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "IFG3",
                      "lane": 12
                     }
                  },
                  {
                    "id": {
                      "chip": "IFG3",
                      "lane": 13
                     }
                  },
                  {
                    "id": {
                      "chip": "IFG3",
                      "lane": 14
                     }
                  },
                  {
                    "id": {
                      "chip": "IFG3",
                      "lane": 15
                     }
                  }
                 ],
                "transceiver": [
                  {
                   "id": {
                      "chip": "eth1/29",
                      "lane": 0
                    }
                  },
                  {
                   "id": {
                      "chip": "eth1/29",
                      "lane": 1
                    }
                  },
                  {
                   "id": {
                      "chip": "eth1/29",
                      "lane": 2
                    }
                  },
                  {
                   "id": {
                      "chip": "eth1/29",
                      "lane": 3
                    }
                  }
                 ]
               }
           },
          "19": {
              "subsumedPorts": [
                226
              ],
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "IFG3",
                      "lane": 12
                     }
                  },
                  {
                    "id": {
                      "chip": "IFG3",
                      "lane": 13
                     }
                  }
                 ],
                "transceiver": [
                  {
                   "id": {
                      "chip": "eth1/29",
                      "lane": 0
                    }
                  },
                  {
                   "id": {
                      "chip": "eth1/29",
                      "lane": 1
                    }
                  }
                 ]
               }
           },
          "22": {
              "subsumedPorts": [
                226,
                227,
                228
              ],
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "IFG3",
                      "lane": 12
                     }
                  },
                  {
                    "id": {
                      "chip": "IFG3",
                      "lane": 13
                     }
                  },
                  {
                    "id": {
                      "chip": "IFG3",
                      "lane": 14
                     }
                  },
                  {
                    "id": {
                      "chip": "IFG3",
                      "lane": 15
                     }
                  }
                 ],
                "transceiver": [
                  {
                   "id": {
                      "chip": "eth1/29",
                      "lane": 0
                    }
                  },
                  {
                   "id": {
                      "chip": "eth1/29",
                      "lane": 1
                    }
                  },
                  {
                   "id": {
                      "chip": "eth1/29",
                      "lane": 2
                    }
                  },
                  {
                   "id": {
                      "chip": "eth1/29",
                      "lane": 3
                    }
                  }
                 ]
               }
           },
          "24": {
              "subsumedPorts": [
                226,
                227,
                228
              ],
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "IFG3",
                      "lane": 12
                     }
                  },
                  {
                    "id": {
                      "chip": "IFG3",
                      "lane": 13
                     }
                  },
                  {
                    "id": {
                      "chip": "IFG3",
                      "lane": 14
                     }
                  },
                  {
                    "id": {
                      "chip": "IFG3",
                      "lane": 15
                     }
                  }
                 ],
                "transceiver": [
                  {
                   "id": {
                      "chip": "eth1/29",
                      "lane": 0
                    }
                  },
                  {
                   "id": {
                      "chip": "eth1/29",
                      "lane": 1
                    }
                  },
                  {
                   "id": {
                      "chip": "eth1/29",
                      "lane": 2
                    }
                  },
                  {
                   "id": {
                      "chip": "eth1/29",
                      "lane": 3
                    }
                  }
                 ]
               }
           }
         }
    },
    "226": {
        "mapping": {
          "id": 226,
          "name": "eth1/29/2",
          "controllingPort": 225,
          "pins": [
            {
              "a": {
                "chip": "IFG3",
                "lane": 13
              },
              "z": {
                "end": {
                  "chip": "eth1/29",
                  "lane": 1
                }
              }
            }
          ]
         },
         "supportedProfiles": {
          "11": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "IFG3",
                      "lane": 13
                     }
                  }
                 ],
                "transceiver": [
                  {
                   "id": {
                      "chip": "eth1/29",
                      "lane": 1
                    }
                  }
                 ]
               }
           },
          "14": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "IFG3",
                      "lane": 13
                     }
                  }
                 ],
                "transceiver": [
                  {
                   "id": {
                      "chip": "eth1/29",
                      "lane": 1
                    }
                  }
                 ]
               }
           }
         }
    },
    "227": {
        "mapping": {
          "id": 227,
          "name": "eth1/29/3",
          "controllingPort": 225,
          "pins": [
            {
              "a": {
                "chip": "IFG3",
                "lane": 14
              },
              "z": {
                "end": {
                  "chip": "eth1/29",
                  "lane": 2
                }
              }
            }
          ]
         },
         "supportedProfiles": {
          "11": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "IFG3",
                      "lane": 14
                     }
                  }
                 ],
                "transceiver": [
                  {
                   "id": {
                      "chip": "eth1/29",
                      "lane": 2
                    }
                  }
                 ]
               }
           },
          "14": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "IFG3",
                      "lane": 14
                     }
                  }
                 ],
                "transceiver": [
                  {
                   "id": {
                      "chip": "eth1/29",
                      "lane": 2
                    }
                  }
                 ]
               }
           },
          "19": {
              "subsumedPorts": [
                228
              ],
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "IFG3",
                      "lane": 14
                     }
                  },
                  {
                    "id": {
                      "chip": "IFG3",
                      "lane": 15
                     }
                  }
                 ],
                "transceiver": [
                  {
                   "id": {
                      "chip": "eth1/29",
                      "lane": 2
                    }
                  },
                  {
                   "id": {
                      "chip": "eth1/29",
                      "lane": 3
                    }
                  }
                 ]
               }
           }
         }
    },
    "228": {
        "mapping": {
          "id": 228,
          "name": "eth1/29/4",
          "controllingPort": 225,
          "pins": [
            {
              "a": {
                "chip": "IFG3",
                "lane": 15
              },
              "z": {
                "end": {
                  "chip": "eth1/29",
                  "lane": 3
                }
              }
            }
          ]
         },
         "supportedProfiles": {
          "11": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "IFG3",
                      "lane": 15
                     }
                  }
                 ],
                "transceiver": [
                  {
                   "id": {
                      "chip": "eth1/29",
                      "lane": 3
                    }
                  }
                 ]
               }
           },
          "14": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "IFG3",
                      "lane": 15
                     }
                  }
                 ],
                "transceiver": [
                  {
                   "id": {
                      "chip": "eth1/29",
                      "lane": 3
                    }
                  }
                 ]
               }
           }
         }
    },
    "229": {
        "mapping": {
          "id": 229,
          "name": "eth1/29/1",
          "controllingPort": 229,
          "pins": [
            {
              "a": {
                "chip": "IFG3",
                "lane": 8
              },
              "z": {
                "end": {
                  "chip": "eth1/29",
                  "lane": 0
                }
              }
            }
          ]
         },
         "supportedProfiles": {
          "11": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "IFG3",
                      "lane": 8
                     }
                  }
                 ],
                "transceiver": [
                  {
                   "id": {
                      "chip": "eth1/29",
                      "lane": 0
                    }
                  }
                 ]
               }
           },
          "14": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "IFG3",
                      "lane": 8
                     }
                  }
                 ],
                "transceiver": [
                  {
                   "id": {
                      "chip": "eth1/29",
                      "lane": 0
                    }
                  }
                 ]
               }
           },
          "17": {
              "subsumedPorts": [
                230,
                231,
                232
              ],
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "IFG3",
                      "lane": 8
                     }
                  },
                  {
                    "id": {
                      "chip": "IFG3",
                      "lane": 9
                     }
                  },
                  {
                    "id": {
                      "chip": "IFG3",
                      "lane": 10
                     }
                  },
                  {
                    "id": {
                      "chip": "IFG3",
                      "lane": 11
                     }
                  }
                 ],
                "transceiver": [
                  {
                   "id": {
                      "chip": "eth1/29",
                      "lane": 0
                    }
                  },
                  {
                   "id": {
                      "chip": "eth1/29",
                      "lane": 1
                    }
                  },
                  {
                   "id": {
                      "chip": "eth1/29",
                      "lane": 2
                    }
                  },
                  {
                   "id": {
                      "chip": "eth1/29",
                      "lane": 3
                    }
                  }
                 ]
               }
           },
          "19": {
              "subsumedPorts": [
                230
              ],
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "IFG3",
                      "lane": 8
                     }
                  },
                  {
                    "id": {
                      "chip": "IFG3",
                      "lane": 9
                     }
                  }
                 ],
                "transceiver": [
                  {
                   "id": {
                      "chip": "eth1/29",
                      "lane": 0
                    }
                  },
                  {
                   "id": {
                      "chip": "eth1/29",
                      "lane": 1
                    }
                  }
                 ]
               }
           },
          "22": {
              "subsumedPorts": [
                230,
                231,
                232
              ],
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "IFG3",
                      "lane": 8
                     }
                  },
                  {
                    "id": {
                      "chip": "IFG3",
                      "lane": 9
                     }
                  },
                  {
                    "id": {
                      "chip": "IFG3",
                      "lane": 10
                     }
                  },
                  {
                    "id": {
                      "chip": "IFG3",
                      "lane": 11
                     }
                  }
                 ],
                "transceiver": [
                  {
                   "id": {
                      "chip": "eth1/29",
                      "lane": 0
                    }
                  },
                  {
                   "id": {
                      "chip": "eth1/29",
                      "lane": 1
                    }
                  },
                  {
                   "id": {
                      "chip": "eth1/29",
                      "lane": 2
                    }
                  },
                  {
                   "id": {
                      "chip": "eth1/29",
                      "lane": 3
                    }
                  }
                 ]
               }
           },
          "24": {
              "subsumedPorts": [
                230,
                231,
                232
              ],
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "IFG3",
                      "lane": 8
                     }
                  },
                  {
                    "id": {
                      "chip": "IFG3",
                      "lane": 9
                     }
                  },
                  {
                    "id": {
                      "chip": "IFG3",
                      "lane": 10
                     }
                  },
                  {
                    "id": {
                      "chip": "IFG3",
                      "lane": 11
                     }
                  }
                 ],
                "transceiver": [
                  {
                   "id": {
                      "chip": "eth1/29",
                      "lane": 0
                    }
                  },
                  {
                   "id": {
                      "chip": "eth1/29",
                      "lane": 1
                    }
                  },
                  {
                   "id": {
                      "chip": "eth1/29",
                      "lane": 2
                    }
                  },
                  {
                   "id": {
                      "chip": "eth1/29",
                      "lane": 3
                    }
                  }
                 ]
               }
           }
         }
    },
    "230": {
        "mapping": {
          "id": 230,
          "name": "eth1/29/2",
          "controllingPort": 229,
          "pins": [
            {
              "a": {
                "chip": "IFG3",
                "lane": 9
              },
              "z": {
                "end": {
                  "chip": "eth1/29",
                  "lane": 1
                }
              }
            }
          ]
         },
         "supportedProfiles": {
          "11": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "IFG3",
                      "lane": 9
                     }
                  }
                 ],
                "transceiver": [
                  {
                   "id": {
                      "chip": "eth1/29",
                      "lane": 1
                    }
                  }
                 ]
               }
           },
          "14": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "IFG3",
                      "lane": 9
                     }
                  }
                 ],
                "transceiver": [
                  {
                   "id": {
                      "chip": "eth1/29",
                      "lane": 1
                    }
                  }
                 ]
               }
           }
         }
    },
    "231": {
        "mapping": {
          "id": 231,
          "name": "eth1/29/3",
          "controllingPort": 229,
          "pins": [
            {
              "a": {
                "chip": "IFG3",
                "lane": 10
              },
              "z": {
                "end": {
                  "chip": "eth1/29",
                  "lane": 2
                }
              }
            }
          ]
         },
         "supportedProfiles": {
          "11": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "IFG3",
                      "lane": 10
                     }
                  }
                 ],
                "transceiver": [
                  {
                   "id": {
                      "chip": "eth1/29",
                      "lane": 2
                    }
                  }
                 ]
               }
           },
          "14": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "IFG3",
                      "lane": 10
                     }
                  }
                 ],
                "transceiver": [
                  {
                   "id": {
                      "chip": "eth1/29",
                      "lane": 2
                    }
                  }
                 ]
               }
           },
          "19": {
              "subsumedPorts": [
                232
              ],
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "IFG3",
                      "lane": 10
                     }
                  },
                  {
                    "id": {
                      "chip": "IFG3",
                      "lane": 11
                     }
                  }
                 ],
                "transceiver": [
                  {
                   "id": {
                      "chip": "eth1/29",
                      "lane": 2
                    }
                  },
                  {
                   "id": {
                      "chip": "eth1/29",
                      "lane": 3
                    }
                  }
                 ]
               }
           }
         }
    },
    "232": {
        "mapping": {
          "id": 232,
          "name": "eth1/29/4",
          "controllingPort": 229,
          "pins": [
            {
              "a": {
                "chip": "IFG3",
                "lane": 11
              },
              "z": {
                "end": {
                  "chip": "eth1/29",
                  "lane": 3
                }
              }
            }
          ]
         },
         "supportedProfiles": {
          "11": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "IFG3",
                      "lane": 11
                     }
                  }
                 ],
                "transceiver": [
                  {
                   "id": {
                      "chip": "eth1/29",
                      "lane": 3
                    }
                  }
                 ]
               }
           },
          "14": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "IFG3",
                      "lane": 11
                     }
                  }
                 ],
                "transceiver": [
                  {
                   "id": {
                      "chip": "eth1/29",
                      "lane": 3
                    }
                  }
                 ]
               }
           }
         }
    },
    "233": {
        "mapping": {
          "id": 233,
          "name": "eth1/30/1",
          "controllingPort": 233,
          "pins": [
            {
              "a": {
                "chip": "IFG2",
                "lane": 8
              },
              "z": {
                "end": {
                  "chip": "eth1/30",
                  "lane": 0
                }
              }
            }
          ]
         },
         "supportedProfiles": {
          "11": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "IFG2",
                      "lane": 8
                     }
                  }
                 ],
                "transceiver": [
                  {
                   "id": {
                      "chip": "eth1/30",
                      "lane": 0
                    }
                  }
                 ]
               }
           },
          "14": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "IFG2",
                      "lane": 8
                     }
                  }
                 ],
                "transceiver": [
                  {
                   "id": {
                      "chip": "eth1/30",
                      "lane": 0
                    }
                  }
                 ]
               }
           },
          "17": {
              "subsumedPorts": [
                234,
                235,
                236
              ],
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "IFG2",
                      "lane": 8
                     }
                  },
                  {
                    "id": {
                      "chip": "IFG2",
                      "lane": 9
                     }
                  },
                  {
                    "id": {
                      "chip": "IFG2",
                      "lane": 10
                     }
                  },
                  {
                    "id": {
                      "chip": "IFG2",
                      "lane": 11
                     }
                  }
                 ],
                "transceiver": [
                  {
                   "id": {
                      "chip": "eth1/30",
                      "lane": 0
                    }
                  },
                  {
                   "id": {
                      "chip": "eth1/30",
                      "lane": 1
                    }
                  },
                  {
                   "id": {
                      "chip": "eth1/30",
                      "lane": 2
                    }
                  },
                  {
                   "id": {
                      "chip": "eth1/30",
                      "lane": 3
                    }
                  }
                 ]
               }
           },
          "19": {
              "subsumedPorts": [
                234
              ],
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "IFG2",
                      "lane": 8
                     }
                  },
                  {
                    "id": {
                      "chip": "IFG2",
                      "lane": 9
                     }
                  }
                 ],
                "transceiver": [
                  {
                   "id": {
                      "chip": "eth1/30",
                      "lane": 0
                    }
                  },
                  {
                   "id": {
                      "chip": "eth1/30",
                      "lane": 1
                    }
                  }
                 ]
               }
           },
          "22": {
              "subsumedPorts": [
                234,
                235,
                236
              ],
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "IFG2",
                      "lane": 8
                     }
                  },
                  {
                    "id": {
                      "chip": "IFG2",
                      "lane": 9
                     }
                  },
                  {
                    "id": {
                      "chip": "IFG2",
                      "lane": 10
                     }
                  },
                  {
                    "id": {
                      "chip": "IFG2",
                      "lane": 11
                     }
                  }
                 ],
                "transceiver": [
                  {
                   "id": {
                      "chip": "eth1/30",
                      "lane": 0
                    }
                  },
                  {
                   "id": {
                      "chip": "eth1/30",
                      "lane": 1
                    }
                  },
                  {
                   "id": {
                      "chip": "eth1/30",
                      "lane": 2
                    }
                  },
                  {
                   "id": {
                      "chip": "eth1/30",
                      "lane": 3
                    }
                  }
                 ]
               }
           },
          "24": {
              "subsumedPorts": [
                234,
                235,
                236
              ],
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "IFG2",
                      "lane": 8
                     }
                  },
                  {
                    "id": {
                      "chip": "IFG2",
                      "lane": 9
                     }
                  },
                  {
                    "id": {
                      "chip": "IFG2",
                      "lane": 10
                     }
                  },
                  {
                    "id": {
                      "chip": "IFG2",
                      "lane": 11
                     }
                  }
                 ],
                "transceiver": [
                  {
                   "id": {
                      "chip": "eth1/30",
                      "lane": 0
                    }
                  },
                  {
                   "id": {
                      "chip": "eth1/30",
                      "lane": 1
                    }
                  },
                  {
                   "id": {
                      "chip": "eth1/30",
                      "lane": 2
                    }
                  },
                  {
                   "id": {
                      "chip": "eth1/30",
                      "lane": 3
                    }
                  }
                 ]
               }
           }
         }
    },
    "234": {
        "mapping": {
          "id": 234,
          "name": "eth1/30/2",
          "controllingPort": 233,
          "pins": [
            {
              "a": {
                "chip": "IFG2",
                "lane": 9
              },
              "z": {
                "end": {
                  "chip": "eth1/30",
                  "lane": 1
                }
              }
            }
          ]
         },
         "supportedProfiles": {
          "11": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "IFG2",
                      "lane": 9
                     }
                  }
                 ],
                "transceiver": [
                  {
                   "id": {
                      "chip": "eth1/30",
                      "lane": 1
                    }
                  }
                 ]
               }
           },
          "14": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "IFG2",
                      "lane": 9
                     }
                  }
                 ],
                "transceiver": [
                  {
                   "id": {
                      "chip": "eth1/30",
                      "lane": 1
                    }
                  }
                 ]
               }
           }
         }
    },
    "235": {
        "mapping": {
          "id": 235,
          "name": "eth1/30/3",
          "controllingPort": 233,
          "pins": [
            {
              "a": {
                "chip": "IFG2",
                "lane": 10
              },
              "z": {
                "end": {
                  "chip": "eth1/30",
                  "lane": 2
                }
              }
            }
          ]
         },
         "supportedProfiles": {
          "11": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "IFG2",
                      "lane": 10
                     }
                  }
                 ],
                "transceiver": [
                  {
                   "id": {
                      "chip": "eth1/30",
                      "lane": 2
                    }
                  }
                 ]
               }
           },
          "14": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "IFG2",
                      "lane": 10
                     }
                  }
                 ],
                "transceiver": [
                  {
                   "id": {
                      "chip": "eth1/30",
                      "lane": 2
                    }
                  }
                 ]
               }
           },
          "19": {
              "subsumedPorts": [
                236
              ],
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "IFG2",
                      "lane": 10
                     }
                  },
                  {
                    "id": {
                      "chip": "IFG2",
                      "lane": 11
                     }
                  }
                 ],
                "transceiver": [
                  {
                   "id": {
                      "chip": "eth1/30",
                      "lane": 2
                    }
                  },
                  {
                   "id": {
                      "chip": "eth1/30",
                      "lane": 3
                    }
                  }
                 ]
               }
           }
         }
    },
    "236": {
        "mapping": {
          "id": 236,
          "name": "eth1/30/4",
          "controllingPort": 233,
          "pins": [
            {
              "a": {
                "chip": "IFG2",
                "lane": 11
              },
              "z": {
                "end": {
                  "chip": "eth1/30",
                  "lane": 3
                }
              }
            }
          ]
         },
         "supportedProfiles": {
          "11": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "IFG2",
                      "lane": 11
                     }
                  }
                 ],
                "transceiver": [
                  {
                   "id": {
                      "chip": "eth1/30",
                      "lane": 3
                    }
                  }
                 ]
               }
           },
          "14": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "IFG2",
                      "lane": 11
                     }
                  }
                 ],
                "transceiver": [
                  {
                   "id": {
                      "chip": "eth1/30",
                      "lane": 3
                    }
                  }
                 ]
               }
           }
         }
    },
    "237": {
        "mapping": {
          "id": 237,
          "name": "eth1/30/1",
          "controllingPort": 237,
          "pins": [
            {
              "a": {
                "chip": "IFG2",
                "lane": 12
              },
              "z": {
                "end": {
                  "chip": "eth1/30",
                  "lane": 0
                }
              }
            }
          ]
         },
         "supportedProfiles": {
          "11": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "IFG2",
                      "lane": 12
                     }
                  }
                 ],
                "transceiver": [
                  {
                   "id": {
                      "chip": "eth1/30",
                      "lane": 0
                    }
                  }
                 ]
               }
           },
          "14": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "IFG2",
                      "lane": 12
                     }
                  }
                 ],
                "transceiver": [
                  {
                   "id": {
                      "chip": "eth1/30",
                      "lane": 0
                    }
                  }
                 ]
               }
           },
          "17": {
              "subsumedPorts": [
                238,
                239,
                240
              ],
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "IFG2",
                      "lane": 12
                     }
                  },
                  {
                    "id": {
                      "chip": "IFG2",
                      "lane": 13
                     }
                  },
                  {
                    "id": {
                      "chip": "IFG2",
                      "lane": 14
                     }
                  },
                  {
                    "id": {
                      "chip": "IFG2",
                      "lane": 15
                     }
                  }
                 ],
                "transceiver": [
                  {
                   "id": {
                      "chip": "eth1/30",
                      "lane": 0
                    }
                  },
                  {
                   "id": {
                      "chip": "eth1/30",
                      "lane": 1
                    }
                  },
                  {
                   "id": {
                      "chip": "eth1/30",
                      "lane": 2
                    }
                  },
                  {
                   "id": {
                      "chip": "eth1/30",
                      "lane": 3
                    }
                  }
                 ]
               }
           },
          "19": {
              "subsumedPorts": [
                238
              ],
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "IFG2",
                      "lane": 12
                     }
                  },
                  {
                    "id": {
                      "chip": "IFG2",
                      "lane": 13
                     }
                  }
                 ],
                "transceiver": [
                  {
                   "id": {
                      "chip": "eth1/30",
                      "lane": 0
                    }
                  },
                  {
                   "id": {
                      "chip": "eth1/30",
                      "lane": 1
                    }
                  }
                 ]
               }
           },
          "22": {
              "subsumedPorts": [
                238,
                239,
                240
              ],
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "IFG2",
                      "lane": 12
                     }
                  },
                  {
                    "id": {
                      "chip": "IFG2",
                      "lane": 13
                     }
                  },
                  {
                    "id": {
                      "chip": "IFG2",
                      "lane": 14
                     }
                  },
                  {
                    "id": {
                      "chip": "IFG2",
                      "lane": 15
                     }
                  }
                 ],
                "transceiver": [
                  {
                   "id": {
                      "chip": "eth1/30",
                      "lane": 0
                    }
                  },
                  {
                   "id": {
                      "chip": "eth1/30",
                      "lane": 1
                    }
                  },
                  {
                   "id": {
                      "chip": "eth1/30",
                      "lane": 2
                    }
                  },
                  {
                   "id": {
                      "chip": "eth1/30",
                      "lane": 3
                    }
                  }
                 ]
               }
           },
          "24": {
              "subsumedPorts": [
                238,
                239,
                240
              ],
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "IFG2",
                      "lane": 12
                     }
                  },
                  {
                    "id": {
                      "chip": "IFG2",
                      "lane": 13
                     }
                  },
                  {
                    "id": {
                      "chip": "IFG2",
                      "lane": 14
                     }
                  },
                  {
                    "id": {
                      "chip": "IFG2",
                      "lane": 15
                     }
                  }
                 ],
                "transceiver": [
                  {
                   "id": {
                      "chip": "eth1/30",
                      "lane": 0
                    }
                  },
                  {
                   "id": {
                      "chip": "eth1/30",
                      "lane": 1
                    }
                  },
                  {
                   "id": {
                      "chip": "eth1/30",
                      "lane": 2
                    }
                  },
                  {
                   "id": {
                      "chip": "eth1/30",
                      "lane": 3
                    }
                  }
                 ]
               }
           }
         }
    },
    "238": {
        "mapping": {
          "id": 238,
          "name": "eth1/30/2",
          "controllingPort": 237,
          "pins": [
            {
              "a": {
                "chip": "IFG2",
                "lane": 13
              },
              "z": {
                "end": {
                  "chip": "eth1/30",
                  "lane": 1
                }
              }
            }
          ]
         },
         "supportedProfiles": {
          "11": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "IFG2",
                      "lane": 13
                     }
                  }
                 ],
                "transceiver": [
                  {
                   "id": {
                      "chip": "eth1/30",
                      "lane": 1
                    }
                  }
                 ]
               }
           },
          "14": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "IFG2",
                      "lane": 13
                     }
                  }
                 ],
                "transceiver": [
                  {
                   "id": {
                      "chip": "eth1/30",
                      "lane": 1
                    }
                  }
                 ]
               }
           }
         }
    },
    "239": {
        "mapping": {
          "id": 239,
          "name": "eth1/30/3",
          "controllingPort": 237,
          "pins": [
            {
              "a": {
                "chip": "IFG2",
                "lane": 14
              },
              "z": {
                "end": {
                  "chip": "eth1/30",
                  "lane": 2
                }
              }
            }
          ]
         },
         "supportedProfiles": {
          "11": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "IFG2",
                      "lane": 14
                     }
                  }
                 ],
                "transceiver": [
                  {
                   "id": {
                      "chip": "eth1/30",
                      "lane": 2
                    }
                  }
                 ]
               }
           },
          "14": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "IFG2",
                      "lane": 14
                     }
                  }
                 ],
                "transceiver": [
                  {
                   "id": {
                      "chip": "eth1/30",
                      "lane": 2
                    }
                  }
                 ]
               }
           },
          "19": {
              "subsumedPorts": [
                240
              ],
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "IFG2",
                      "lane": 14
                     }
                  },
                  {
                    "id": {
                      "chip": "IFG2",
                      "lane": 15
                     }
                  }
                 ],
                "transceiver": [
                  {
                   "id": {
                      "chip": "eth1/30",
                      "lane": 2
                    }
                  },
                  {
                   "id": {
                      "chip": "eth1/30",
                      "lane": 3
                    }
                  }
                 ]
               }
           }
         }
    },
    "240": {
        "mapping": {
          "id": 240,
          "name": "eth1/30/4",
          "controllingPort": 237,
          "pins": [
            {
              "a": {
                "chip": "IFG2",
                "lane": 15
              },
              "z": {
                "end": {
                  "chip": "eth1/30",
                  "lane": 3
                }
              }
            }
          ]
         },
         "supportedProfiles": {
          "11": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "IFG2",
                      "lane": 15
                     }
                  }
                 ],
                "transceiver": [
                  {
                   "id": {
                      "chip": "eth1/30",
                      "lane": 3
                    }
                  }
                 ]
               }
           },
          "14": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "IFG2",
                      "lane": 15
                     }
                  }
                 ],
                "transceiver": [
                  {
                   "id": {
                      "chip": "eth1/30",
                      "lane": 3
                    }
                  }
                 ]
               }
           }
         }
    },
    "241": {
        "mapping": {
          "id": 241,
          "name": "eth1/31/1",
          "controllingPort": 241,
          "pins": [
            {
              "a": {
                "chip": "IFG2",
                "lane": 4
              },
              "z": {
                "end": {
                  "chip": "eth1/31",
                  "lane": 0
                }
              }
            }
          ]
         },
         "supportedProfiles": {
          "11": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "IFG2",
                      "lane": 4
                     }
                  }
                 ],
                "transceiver": [
                  {
                   "id": {
                      "chip": "eth1/31",
                      "lane": 0
                    }
                  }
                 ]
               }
           },
          "14": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "IFG2",
                      "lane": 4
                     }
                  }
                 ],
                "transceiver": [
                  {
                   "id": {
                      "chip": "eth1/31",
                      "lane": 0
                    }
                  }
                 ]
               }
           },
          "17": {
              "subsumedPorts": [
                242,
                243,
                244
              ],
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "IFG2",
                      "lane": 4
                     }
                  },
                  {
                    "id": {
                      "chip": "IFG2",
                      "lane": 5
                     }
                  },
                  {
                    "id": {
                      "chip": "IFG2",
                      "lane": 6
                     }
                  },
                  {
                    "id": {
                      "chip": "IFG2",
                      "lane": 7
                     }
                  }
                 ],
                "transceiver": [
                  {
                   "id": {
                      "chip": "eth1/31",
                      "lane": 0
                    }
                  },
                  {
                   "id": {
                      "chip": "eth1/31",
                      "lane": 1
                    }
                  },
                  {
                   "id": {
                      "chip": "eth1/31",
                      "lane": 2
                    }
                  },
                  {
                   "id": {
                      "chip": "eth1/31",
                      "lane": 3
                    }
                  }
                 ]
               }
           },
          "19": {
              "subsumedPorts": [
                242
              ],
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "IFG2",
                      "lane": 4
                     }
                  },
                  {
                    "id": {
                      "chip": "IFG2",
                      "lane": 5
                     }
                  }
                 ],
                "transceiver": [
                  {
                   "id": {
                      "chip": "eth1/31",
                      "lane": 0
                    }
                  },
                  {
                   "id": {
                      "chip": "eth1/31",
                      "lane": 1
                    }
                  }
                 ]
               }
           },
          "22": {
              "subsumedPorts": [
                242,
                243,
                244
              ],
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "IFG2",
                      "lane": 4
                     }
                  },
                  {
                    "id": {
                      "chip": "IFG2",
                      "lane": 5
                     }
                  },
                  {
                    "id": {
                      "chip": "IFG2",
                      "lane": 6
                     }
                  },
                  {
                    "id": {
                      "chip": "IFG2",
                      "lane": 7
                     }
                  }
                 ],
                "transceiver": [
                  {
                   "id": {
                      "chip": "eth1/31",
                      "lane": 0
                    }
                  },
                  {
                   "id": {
                      "chip": "eth1/31",
                      "lane": 1
                    }
                  },
                  {
                   "id": {
                      "chip": "eth1/31",
                      "lane": 2
                    }
                  },
                  {
                   "id": {
                      "chip": "eth1/31",
                      "lane": 3
                    }
                  }
                 ]
               }
           },
          "24": {
              "subsumedPorts": [
                242,
                243,
                244
              ],
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "IFG2",
                      "lane": 4
                     }
                  },
                  {
                    "id": {
                      "chip": "IFG2",
                      "lane": 5
                     }
                  },
                  {
                    "id": {
                      "chip": "IFG2",
                      "lane": 6
                     }
                  },
                  {
                    "id": {
                      "chip": "IFG2",
                      "lane": 7
                     }
                  }
                 ],
                "transceiver": [
                  {
                   "id": {
                      "chip": "eth1/31",
                      "lane": 0
                    }
                  },
                  {
                   "id": {
                      "chip": "eth1/31",
                      "lane": 1
                    }
                  },
                  {
                   "id": {
                      "chip": "eth1/31",
                      "lane": 2
                    }
                  },
                  {
                   "id": {
                      "chip": "eth1/31",
                      "lane": 3
                    }
                  }
                 ]
               }
           }
         }
    },
    "242": {
        "mapping": {
          "id": 242,
          "name": "eth1/31/2",
          "controllingPort": 241,
          "pins": [
            {
              "a": {
                "chip": "IFG2",
                "lane": 5
              },
              "z": {
                "end": {
                  "chip": "eth1/31",
                  "lane": 1
                }
              }
            }
          ]
         },
         "supportedProfiles": {
          "11": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "IFG2",
                      "lane": 5
                     }
                  }
                 ],
                "transceiver": [
                  {
                   "id": {
                      "chip": "eth1/31",
                      "lane": 1
                    }
                  }
                 ]
               }
           },
          "14": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "IFG2",
                      "lane": 5
                     }
                  }
                 ],
                "transceiver": [
                  {
                   "id": {
                      "chip": "eth1/31",
                      "lane": 1
                    }
                  }
                 ]
               }
           }
         }
    },
    "243": {
        "mapping": {
          "id": 243,
          "name": "eth1/31/3",
          "controllingPort": 241,
          "pins": [
            {
              "a": {
                "chip": "IFG2",
                "lane": 6
              },
              "z": {
                "end": {
                  "chip": "eth1/31",
                  "lane": 2
                }
              }
            }
          ]
         },
         "supportedProfiles": {
          "11": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "IFG2",
                      "lane": 6
                     }
                  }
                 ],
                "transceiver": [
                  {
                   "id": {
                      "chip": "eth1/31",
                      "lane": 2
                    }
                  }
                 ]
               }
           },
          "14": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "IFG2",
                      "lane": 6
                     }
                  }
                 ],
                "transceiver": [
                  {
                   "id": {
                      "chip": "eth1/31",
                      "lane": 2
                    }
                  }
                 ]
               }
           },
          "19": {
              "subsumedPorts": [
                244
              ],
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "IFG2",
                      "lane": 6
                     }
                  },
                  {
                    "id": {
                      "chip": "IFG2",
                      "lane": 7
                     }
                  }
                 ],
                "transceiver": [
                  {
                   "id": {
                      "chip": "eth1/31",
                      "lane": 2
                    }
                  },
                  {
                   "id": {
                      "chip": "eth1/31",
                      "lane": 3
                    }
                  }
                 ]
               }
           }
         }
    },
    "244": {
        "mapping": {
          "id": 244,
          "name": "eth1/31/4",
          "controllingPort": 241,
          "pins": [
            {
              "a": {
                "chip": "IFG2",
                "lane": 7
              },
              "z": {
                "end": {
                  "chip": "eth1/31",
                  "lane": 3
                }
              }
            }
          ]
         },
         "supportedProfiles": {
          "11": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "IFG2",
                      "lane": 7
                     }
                  }
                 ],
                "transceiver": [
                  {
                   "id": {
                      "chip": "eth1/31",
                      "lane": 3
                    }
                  }
                 ]
               }
           },
          "14": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "IFG2",
                      "lane": 7
                     }
                  }
                 ],
                "transceiver": [
                  {
                   "id": {
                      "chip": "eth1/31",
                      "lane": 3
                    }
                  }
                 ]
               }
           }
         }
    },
    "245": {
        "mapping": {
          "id": 245,
          "name": "eth1/31/1",
          "controllingPort": 245,
          "pins": [
            {
              "a": {
                "chip": "IFG2",
                "lane": 0
              },
              "z": {
                "end": {
                  "chip": "eth1/31",
                  "lane": 0
                }
              }
            }
          ]
         },
         "supportedProfiles": {
          "11": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "IFG2",
                      "lane": 0
                     }
                  }
                 ],
                "transceiver": [
                  {
                   "id": {
                      "chip": "eth1/31",
                      "lane": 0
                    }
                  }
                 ]
               }
           },
          "14": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "IFG2",
                      "lane": 0
                     }
                  }
                 ],
                "transceiver": [
                  {
                   "id": {
                      "chip": "eth1/31",
                      "lane": 0
                    }
                  }
                 ]
               }
           },
          "17": {
              "subsumedPorts": [
                246,
                247,
                248
              ],
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "IFG2",
                      "lane": 0
                     }
                  },
                  {
                    "id": {
                      "chip": "IFG2",
                      "lane": 1
                     }
                  },
                  {
                    "id": {
                      "chip": "IFG2",
                      "lane": 2
                     }
                  },
                  {
                    "id": {
                      "chip": "IFG2",
                      "lane": 3
                     }
                  }
                 ],
                "transceiver": [
                  {
                   "id": {
                      "chip": "eth1/31",
                      "lane": 0
                    }
                  },
                  {
                   "id": {
                      "chip": "eth1/31",
                      "lane": 1
                    }
                  },
                  {
                   "id": {
                      "chip": "eth1/31",
                      "lane": 2
                    }
                  },
                  {
                   "id": {
                      "chip": "eth1/31",
                      "lane": 3
                    }
                  }
                 ]
               }
           },
          "19": {
              "subsumedPorts": [
                246
              ],
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "IFG2",
                      "lane": 0
                     }
                  },
                  {
                    "id": {
                      "chip": "IFG2",
                      "lane": 1
                     }
                  }
                 ],
                "transceiver": [
                  {
                   "id": {
                      "chip": "eth1/31",
                      "lane": 0
                    }
                  },
                  {
                   "id": {
                      "chip": "eth1/31",
                      "lane": 1
                    }
                  }
                 ]
               }
           },
          "22": {
              "subsumedPorts": [
                246,
                247,
                248
              ],
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "IFG2",
                      "lane": 0
                     }
                  },
                  {
                    "id": {
                      "chip": "IFG2",
                      "lane": 1
                     }
                  },
                  {
                    "id": {
                      "chip": "IFG2",
                      "lane": 2
                     }
                  },
                  {
                    "id": {
                      "chip": "IFG2",
                      "lane": 3
                     }
                  }
                 ],
                "transceiver": [
                  {
                   "id": {
                      "chip": "eth1/31",
                      "lane": 0
                    }
                  },
                  {
                   "id": {
                      "chip": "eth1/31",
                      "lane": 1
                    }
                  },
                  {
                   "id": {
                      "chip": "eth1/31",
                      "lane": 2
                    }
                  },
                  {
                   "id": {
                      "chip": "eth1/31",
                      "lane": 3
                    }
                  }
                 ]
               }
           },
          "24": {
              "subsumedPorts": [
                246,
                247,
                248
              ],
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "IFG2",
                      "lane": 0
                     }
                  },
                  {
                    "id": {
                      "chip": "IFG2",
                      "lane": 1
                     }
                  },
                  {
                    "id": {
                      "chip": "IFG2",
                      "lane": 2
                     }
                  },
                  {
                    "id": {
                      "chip": "IFG2",
                      "lane": 3
                     }
                  }
                 ],
                "transceiver": [
                  {
                   "id": {
                      "chip": "eth1/31",
                      "lane": 0
                    }
                  },
                  {
                   "id": {
                      "chip": "eth1/31",
                      "lane": 1
                    }
                  },
                  {
                   "id": {
                      "chip": "eth1/31",
                      "lane": 2
                    }
                  },
                  {
                   "id": {
                      "chip": "eth1/31",
                      "lane": 3
                    }
                  }
                 ]
               }
           }
         }
    },
    "246": {
        "mapping": {
          "id": 246,
          "name": "eth1/31/2",
          "controllingPort": 245,
          "pins": [
            {
              "a": {
                "chip": "IFG2",
                "lane": 1
              },
              "z": {
                "end": {
                  "chip": "eth1/31",
                  "lane": 1
                }
              }
            }
          ]
         },
         "supportedProfiles": {
          "11": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "IFG2",
                      "lane": 1
                     }
                  }
                 ],
                "transceiver": [
                  {
                   "id": {
                      "chip": "eth1/31",
                      "lane": 1
                    }
                  }
                 ]
               }
           },
          "14": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "IFG2",
                      "lane": 1
                     }
                  }
                 ],
                "transceiver": [
                  {
                   "id": {
                      "chip": "eth1/31",
                      "lane": 1
                    }
                  }
                 ]
               }
           }
         }
    },
    "247": {
        "mapping": {
          "id": 247,
          "name": "eth1/31/3",
          "controllingPort": 245,
          "pins": [
            {
              "a": {
                "chip": "IFG2",
                "lane": 2
              },
              "z": {
                "end": {
                  "chip": "eth1/31",
                  "lane": 2
                }
              }
            }
          ]
         },
         "supportedProfiles": {
          "11": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "IFG2",
                      "lane": 2
                     }
                  }
                 ],
                "transceiver": [
                  {
                   "id": {
                      "chip": "eth1/31",
                      "lane": 2
                    }
                  }
                 ]
               }
           },
          "14": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "IFG2",
                      "lane": 2
                     }
                  }
                 ],
                "transceiver": [
                  {
                   "id": {
                      "chip": "eth1/31",
                      "lane": 2
                    }
                  }
                 ]
               }
           },
          "19": {
              "subsumedPorts": [
                248
              ],
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "IFG2",
                      "lane": 2
                     }
                  },
                  {
                    "id": {
                      "chip": "IFG2",
                      "lane": 3
                     }
                  }
                 ],
                "transceiver": [
                  {
                   "id": {
                      "chip": "eth1/31",
                      "lane": 2
                    }
                  },
                  {
                   "id": {
                      "chip": "eth1/31",
                      "lane": 3
                    }
                  }
                 ]
               }
           }
         }
    },
    "248": {
        "mapping": {
          "id": 248,
          "name": "eth1/31/4",
          "controllingPort": 245,
          "pins": [
            {
              "a": {
                "chip": "IFG2",
                "lane": 3
              },
              "z": {
                "end": {
                  "chip": "eth1/31",
                  "lane": 3
                }
              }
            }
          ]
         },
         "supportedProfiles": {
          "11": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "IFG2",
                      "lane": 3
                     }
                  }
                 ],
                "transceiver": [
                  {
                   "id": {
                      "chip": "eth1/31",
                      "lane": 3
                    }
                  }
                 ]
               }
           },
          "14": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "IFG2",
                      "lane": 3
                     }
                  }
                 ],
                "transceiver": [
                  {
                   "id": {
                      "chip": "eth1/31",
                      "lane": 3
                    }
                  }
                 ]
               }
           }
         }
    },
    "249": {
        "mapping": {
          "id": 249,
          "name": "eth1/32/1",
          "controllingPort": 249,
          "pins": [
            {
              "a": {
                "chip": "IFG1",
                "lane": 12
              },
              "z": {
                "end": {
                  "chip": "eth1/32",
                  "lane": 0
                }
              }
            }
          ]
         },
         "supportedProfiles": {
          "11": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "IFG1",
                      "lane": 12
                     }
                  }
                 ],
                "transceiver": [
                  {
                   "id": {
                      "chip": "eth1/32",
                      "lane": 0
                    }
                  }
                 ]
               }
           },
          "14": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "IFG1",
                      "lane": 12
                     }
                  }
                 ],
                "transceiver": [
                  {
                   "id": {
                      "chip": "eth1/32",
                      "lane": 0
                    }
                  }
                 ]
               }
           },
          "17": {
              "subsumedPorts": [
                250,
                251,
                252
              ],
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "IFG1",
                      "lane": 12
                     }
                  },
                  {
                    "id": {
                      "chip": "IFG1",
                      "lane": 13
                     }
                  },
                  {
                    "id": {
                      "chip": "IFG1",
                      "lane": 14
                     }
                  },
                  {
                    "id": {
                      "chip": "IFG1",
                      "lane": 15
                     }
                  }
                 ],
                "transceiver": [
                  {
                   "id": {
                      "chip": "eth1/32",
                      "lane": 0
                    }
                  },
                  {
                   "id": {
                      "chip": "eth1/32",
                      "lane": 1
                    }
                  },
                  {
                   "id": {
                      "chip": "eth1/32",
                      "lane": 2
                    }
                  },
                  {
                   "id": {
                      "chip": "eth1/32",
                      "lane": 3
                    }
                  }
                 ]
               }
           },
          "19": {
              "subsumedPorts": [
                250
              ],
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "IFG1",
                      "lane": 12
                     }
                  },
                  {
                    "id": {
                      "chip": "IFG1",
                      "lane": 13
                     }
                  }
                 ],
                "transceiver": [
                  {
                   "id": {
                      "chip": "eth1/32",
                      "lane": 0
                    }
                  },
                  {
                   "id": {
                      "chip": "eth1/32",
                      "lane": 1
                    }
                  }
                 ]
               }
           },
          "22": {
              "subsumedPorts": [
                250,
                251,
                252
              ],
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "IFG1",
                      "lane": 12
                     }
                  },
                  {
                    "id": {
                      "chip": "IFG1",
                      "lane": 13
                     }
                  },
                  {
                    "id": {
                      "chip": "IFG1",
                      "lane": 14
                     }
                  },
                  {
                    "id": {
                      "chip": "IFG1",
                      "lane": 15
                     }
                  }
                 ],
                "transceiver": [
                  {
                   "id": {
                      "chip": "eth1/32",
                      "lane": 0
                    }
                  },
                  {
                   "id": {
                      "chip": "eth1/32",
                      "lane": 1
                    }
                  },
                  {
                   "id": {
                      "chip": "eth1/32",
                      "lane": 2
                    }
                  },
                  {
                   "id": {
                      "chip": "eth1/32",
                      "lane": 3
                    }
                  }
                 ]
               }
           },
          "24": {
              "subsumedPorts": [
                250,
                251,
                252
              ],
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "IFG1",
                      "lane": 12
                     }
                  },
                  {
                    "id": {
                      "chip": "IFG1",
                      "lane": 13
                     }
                  },
                  {
                    "id": {
                      "chip": "IFG1",
                      "lane": 14
                     }
                  },
                  {
                    "id": {
                      "chip": "IFG1",
                      "lane": 15
                     }
                  }
                 ],
                "transceiver": [
                  {
                   "id": {
                      "chip": "eth1/32",
                      "lane": 0
                    }
                  },
                  {
                   "id": {
                      "chip": "eth1/32",
                      "lane": 1
                    }
                  },
                  {
                   "id": {
                      "chip": "eth1/32",
                      "lane": 2
                    }
                  },
                  {
                   "id": {
                      "chip": "eth1/32",
                      "lane": 3
                    }
                  }
                 ]
               }
           }
         }
    },
    "250": {
        "mapping": {
          "id": 250,
          "name": "eth1/32/2",
          "controllingPort": 249,
          "pins": [
            {
              "a": {
                "chip": "IFG1",
                "lane": 13
              },
              "z": {
                "end": {
                  "chip": "eth1/32",
                  "lane": 1
                }
              }
            }
          ]
         },
         "supportedProfiles": {
          "11": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "IFG1",
                      "lane": 13
                     }
                  }
                 ],
                "transceiver": [
                  {
                   "id": {
                      "chip": "eth1/32",
                      "lane": 1
                    }
                  }
                 ]
               }
           },
          "14": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "IFG1",
                      "lane": 13
                     }
                  }
                 ],
                "transceiver": [
                  {
                   "id": {
                      "chip": "eth1/32",
                      "lane": 1
                    }
                  }
                 ]
               }
           }
         }
    },
    "251": {
        "mapping": {
          "id": 251,
          "name": "eth1/32/3",
          "controllingPort": 249,
          "pins": [
            {
              "a": {
                "chip": "IFG1",
                "lane": 14
              },
              "z": {
                "end": {
                  "chip": "eth1/32",
                  "lane": 2
                }
              }
            }
          ]
         },
         "supportedProfiles": {
          "11": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "IFG1",
                      "lane": 14
                     }
                  }
                 ],
                "transceiver": [
                  {
                   "id": {
                      "chip": "eth1/32",
                      "lane": 2
                    }
                  }
                 ]
               }
           },
          "14": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "IFG1",
                      "lane": 14
                     }
                  }
                 ],
                "transceiver": [
                  {
                   "id": {
                      "chip": "eth1/32",
                      "lane": 2
                    }
                  }
                 ]
               }
           },
          "19": {
              "subsumedPorts": [
                252
              ],
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "IFG1",
                      "lane": 14
                     }
                  },
                  {
                    "id": {
                      "chip": "IFG1",
                      "lane": 15
                     }
                  }
                 ],
                "transceiver": [
                  {
                   "id": {
                      "chip": "eth1/32",
                      "lane": 2
                    }
                  },
                  {
                   "id": {
                      "chip": "eth1/32",
                      "lane": 3
                    }
                  }
                 ]
               }
           }
         }
    },
    "252": {
        "mapping": {
          "id": 252,
          "name": "eth1/32/4",
          "controllingPort": 249,
          "pins": [
            {
              "a": {
                "chip": "IFG1",
                "lane": 15
              },
              "z": {
                "end": {
                  "chip": "eth1/32",
                  "lane": 3
                }
              }
            }
          ]
         },
         "supportedProfiles": {
          "11": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "IFG1",
                      "lane": 15
                     }
                  }
                 ],
                "transceiver": [
                  {
                   "id": {
                      "chip": "eth1/32",
                      "lane": 3
                    }
                  }
                 ]
               }
           },
          "14": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "IFG1",
                      "lane": 15
                     }
                  }
                 ],
                "transceiver": [
                  {
                   "id": {
                      "chip": "eth1/32",
                      "lane": 3
                    }
                  }
                 ]
               }
           }
         }
    },
    "253": {
        "mapping": {
          "id": 253,
          "name": "eth1/32/1",
          "controllingPort": 253,
          "pins": [
            {
              "a": {
                "chip": "IFG1",
                "lane": 8
              },
              "z": {
                "end": {
                  "chip": "eth1/32",
                  "lane": 0
                }
              }
            }
          ]
         },
         "supportedProfiles": {
          "11": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "IFG1",
                      "lane": 8
                     }
                  }
                 ],
                "transceiver": [
                  {
                   "id": {
                      "chip": "eth1/32",
                      "lane": 0
                    }
                  }
                 ]
               }
           },
          "14": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "IFG1",
                      "lane": 8
                     }
                  }
                 ],
                "transceiver": [
                  {
                   "id": {
                      "chip": "eth1/32",
                      "lane": 0
                    }
                  }
                 ]
               }
           },
          "17": {
              "subsumedPorts": [
                254,
                255,
                256
              ],
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "IFG1",
                      "lane": 8
                     }
                  },
                  {
                    "id": {
                      "chip": "IFG1",
                      "lane": 9
                     }
                  },
                  {
                    "id": {
                      "chip": "IFG1",
                      "lane": 10
                     }
                  },
                  {
                    "id": {
                      "chip": "IFG1",
                      "lane": 11
                     }
                  }
                 ],
                "transceiver": [
                  {
                   "id": {
                      "chip": "eth1/32",
                      "lane": 0
                    }
                  },
                  {
                   "id": {
                      "chip": "eth1/32",
                      "lane": 1
                    }
                  },
                  {
                   "id": {
                      "chip": "eth1/32",
                      "lane": 2
                    }
                  },
                  {
                   "id": {
                      "chip": "eth1/32",
                      "lane": 3
                    }
                  }
                 ]
               }
           },
          "19": {
              "subsumedPorts": [
                254
              ],
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "IFG1",
                      "lane": 8
                     }
                  },
                  {
                    "id": {
                      "chip": "IFG1",
                      "lane": 9
                     }
                  }
                 ],
                "transceiver": [
                  {
                   "id": {
                      "chip": "eth1/32",
                      "lane": 0
                    }
                  },
                  {
                   "id": {
                      "chip": "eth1/32",
                      "lane": 1
                    }
                  }
                 ]
               }
           },
          "22": {
              "subsumedPorts": [
                254,
                255,
                256
              ],
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "IFG1",
                      "lane": 8
                     }
                  },
                  {
                    "id": {
                      "chip": "IFG1",
                      "lane": 9
                     }
                  },
                  {
                    "id": {
                      "chip": "IFG1",
                      "lane": 10
                     }
                  },
                  {
                    "id": {
                      "chip": "IFG1",
                      "lane": 11
                     }
                  }
                 ],
                "transceiver": [
                  {
                   "id": {
                      "chip": "eth1/32",
                      "lane": 0
                    }
                  },
                  {
                   "id": {
                      "chip": "eth1/32",
                      "lane": 1
                    }
                  },
                  {
                   "id": {
                      "chip": "eth1/32",
                      "lane": 2
                    }
                  },
                  {
                   "id": {
                      "chip": "eth1/32",
                      "lane": 3
                    }
                  }
                 ]
               }
           },
          "24": {
              "subsumedPorts": [
                254,
                255,
                256
              ],
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "IFG1",
                      "lane": 8
                     }
                  },
                  {
                    "id": {
                      "chip": "IFG1",
                      "lane": 9
                     }
                  },
                  {
                    "id": {
                      "chip": "IFG1",
                      "lane": 10
                     }
                  },
                  {
                    "id": {
                      "chip": "IFG1",
                      "lane": 11
                     }
                  }
                 ],
                "transceiver": [
                  {
                   "id": {
                      "chip": "eth1/32",
                      "lane": 0
                    }
                  },
                  {
                   "id": {
                      "chip": "eth1/32",
                      "lane": 1
                    }
                  },
                  {
                   "id": {
                      "chip": "eth1/32",
                      "lane": 2
                    }
                  },
                  {
                   "id": {
                      "chip": "eth1/32",
                      "lane": 3
                    }
                  }
                 ]
               }
           }
         }
    },
    "254": {
        "mapping": {
          "id": 254,
          "name": "eth1/32/2",
          "controllingPort": 253,
          "pins": [
            {
              "a": {
                "chip": "IFG1",
                "lane": 9
              },
              "z": {
                "end": {
                  "chip": "eth1/32",
                  "lane": 1
                }
              }
            }
          ]
         },
         "supportedProfiles": {
          "11": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "IFG1",
                      "lane": 9
                     }
                  }
                 ],
                "transceiver": [
                  {
                   "id": {
                      "chip": "eth1/32",
                      "lane": 1
                    }
                  }
                 ]
               }
           },
          "14": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "IFG1",
                      "lane": 9
                     }
                  }
                 ],
                "transceiver": [
                  {
                   "id": {
                      "chip": "eth1/32",
                      "lane": 1
                    }
                  }
                 ]
               }
           }
         }
    },
    "255": {
        "mapping": {
          "id": 255,
          "name": "eth1/32/3",
          "controllingPort": 253,
          "pins": [
            {
              "a": {
                "chip": "IFG1",
                "lane": 10
              },
              "z": {
                "end": {
                  "chip": "eth1/32",
                  "lane": 2
                }
              }
            }
          ]
         },
         "supportedProfiles": {
          "11": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "IFG1",
                      "lane": 10
                     }
                  }
                 ],
                "transceiver": [
                  {
                   "id": {
                      "chip": "eth1/32",
                      "lane": 2
                    }
                  }
                 ]
               }
           },
          "14": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "IFG1",
                      "lane": 10
                     }
                  }
                 ],
                "transceiver": [
                  {
                   "id": {
                      "chip": "eth1/32",
                      "lane": 2
                    }
                  }
                 ]
               }
           },
          "19": {
              "subsumedPorts": [
                256
              ],
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "IFG1",
                      "lane": 10
                     }
                  },
                  {
                    "id": {
                      "chip": "IFG1",
                      "lane": 11
                     }
                  }
                 ],
                "transceiver": [
                  {
                   "id": {
                      "chip": "eth1/32",
                      "lane": 2
                    }
                  },
                  {
                   "id": {
                      "chip": "eth1/32",
                      "lane": 3
                    }
                  }
                 ]
               }
           }
         }
    },
    "256": {
        "mapping": {
          "id": 256,
          "name": "eth1/32/4",
          "controllingPort": 253,
          "pins": [
            {
              "a": {
                "chip": "IFG1",
                "lane": 11
              },
              "z": {
                "end": {
                  "chip": "eth1/32",
                  "lane": 3
                }
              }
            }
          ]
         },
         "supportedProfiles": {
          "11": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "IFG1",
                      "lane": 11
                     }
                  }
                 ],
                "transceiver": [
                  {
                   "id": {
                      "chip": "eth1/32",
                      "lane": 3
                    }
                  }
                 ]
               }
           },
          "14": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "IFG1",
                      "lane": 11
                     }
                  }
                 ],
                "transceiver": [
                  {
                   "id": {
                      "chip": "eth1/32",
                      "lane": 3
                    }
                  }
                 ]
               }
           }
         }
    }
},
"supportedProfiles": {
    "11": {
        "speed": 10000,
        "iphy": {
          "numLanes": 1,
          "modulation": 1,
          "fec": 1,
          "medium": 1,
          "interfaceMode": 10
        }
    },
    "14": {
        "speed": 25000,
        "iphy": {
          "numLanes": 1,
          "modulation": 1,
          "fec": 1,
          "medium": 1,
          "interfaceMode": 10
        }
    },
    "17": {
        "speed": 40000,
        "iphy": {
          "numLanes": 4,
          "modulation": 1,
          "fec": 1,
          "medium": 1,
          "interfaceMode": 12
        }
    },
    "19": {
        "speed": 50000,
        "iphy": {
          "numLanes": 2,
          "modulation": 1,
          "fec": 1,
          "medium": 1,
          "interfaceMode": 11
        }
    },
    "22": {
        "speed": 100000,
        "iphy": {
          "numLanes": 4,
          "modulation": 1,
          "fec": 528,
          "medium": 1,
          "interfaceMode": 12
        }
    },
    "23": {
        "speed": 100000,
        "iphy": {
          "numLanes": 4,
          "modulation": 1,
          "fec": 528,
          "medium": 2,
          "interfaceMode": 3
        }
    },
    "24": {
        "speed": 200000,
        "iphy": {
          "numLanes": 4,
          "modulation": 2,
          "fec": 11,
          "medium": 1,
          "interfaceMode": 12
        }
    },
    "25": {
        "speed": 200000,
        "iphy": {
          "numLanes": 4,
          "modulation": 2,
          "fec": 11,
          "medium": 2,
          "interfaceMode": 3
        }
    },
    "26": {
        "speed": 400000,
        "iphy": {
          "numLanes": 8,
          "modulation": 2,
          "fec": 11,
          "medium": 2,
          "interfaceMode": 4
        }
    }
  },
  "chips": [
    {
      "name": "IFG0",
      "type": 1,
      "physicalID": 0
    },
    {
      "name": "IFG1",
      "type": 1,
      "physicalID": 1
    },
    {
      "name": "IFG2",
      "type": 1,
      "physicalID": 2
    },
    {
      "name": "IFG3",
      "type": 1,
      "physicalID": 3
    },
    {
      "name": "IFG4",
      "type": 1,
      "physicalID": 4
    },
    {
      "name": "IFG5",
      "type": 1,
      "physicalID": 5
    },
    {
      "name": "IFG6",
      "type": 1,
      "physicalID": 6
    },
    {
      "name": "IFG7",
      "type": 1,
      "physicalID": 7
    },
    {
      "name": "IFG8",
      "type": 1,
      "physicalID": 8
    },
    {
      "name": "IFG9",
      "type": 1,
      "physicalID": 9
    },
    {
      "name": "IFG10",
      "type": 1,
      "physicalID": 10
    },
    {
      "name": "IFG11",
      "type": 1,
      "physicalID": 11
    },
    {
      "name": "eth1/1",
      "type": 3,
      "physicalID": 0
    },
    {
      "name": "eth1/2",
      "type": 3,
      "physicalID": 1
    },
    {
      "name": "eth1/3",
      "type": 3,
      "physicalID": 2
    },
    {
      "name": "eth1/4",
      "type": 3,
      "physicalID": 3
    },
    {
      "name": "eth1/5",
      "type": 3,
      "physicalID": 4
    },
    {
      "name": "eth1/6",
      "type": 3,
      "physicalID": 5
    },
    {
      "name": "eth1/7",
      "type": 3,
      "physicalID": 6
    },
    {
      "name": "eth1/8",
      "type": 3,
      "physicalID": 7
    },
    {
      "name": "eth1/9",
      "type": 3,
      "physicalID": 8
    },
    {
      "name": "eth1/10",
      "type": 3,
      "physicalID": 9
    },
    {
      "name": "eth1/11",
      "type": 3,
      "physicalID": 10
    },
    {
      "name": "eth1/12",
      "type": 3,
      "physicalID": 11
    },
    {
      "name": "eth1/13",
      "type": 3,
      "physicalID": 12
    },
    {
      "name": "eth1/14",
      "type": 3,
      "physicalID": 13
    },
    {
      "name": "eth1/15",
      "type": 3,
      "physicalID": 14
    },
    {
      "name": "eth1/16",
      "type": 3,
      "physicalID": 15
    },
    {
      "name": "eth1/17",
      "type": 3,
      "physicalID": 16
    },
    {
      "name": "eth1/18",
      "type": 3,
      "physicalID": 17
    },
    {
      "name": "eth1/19",
      "type": 3,
      "physicalID": 18
    },
    {
      "name": "eth1/20",
      "type": 3,
      "physicalID": 19
    },
    {
      "name": "eth1/21",
      "type": 3,
      "physicalID": 20
    },
    {
      "name": "eth1/22",
      "type": 3,
      "physicalID": 21
    },
    {
      "name": "eth1/23",
      "type": 3,
      "physicalID": 22
    },
    {
      "name": "eth1/24",
      "type": 3,
      "physicalID": 23
    },
    {
      "name": "eth1/25",
      "type": 3,
      "physicalID": 24
    },
    {
      "name": "eth1/26",
      "type": 3,
      "physicalID": 25
    },
    {
      "name": "eth1/27",
      "type": 3,
      "physicalID": 26
    },
    {
      "name": "eth1/28",
      "type": 3,
      "physicalID": 27
    },
    {
      "name": "eth1/29",
      "type": 3,
      "physicalID": 28
    },
    {
      "name": "eth1/30",
      "type": 3,
      "physicalID": 29
    },
    {
      "name": "eth1/31",
      "type": 3,
      "physicalID": 30
    },
    {
      "name": "eth1/32",
      "type": 3,
      "physicalID": 31
    },
    {
      "name": "eth1/33",
      "type": 3,
      "physicalID": 32
    },
    {
      "name": "eth1/34",
      "type": 3,
      "physicalID": 33
    },
    {
      "name": "eth1/35",
      "type": 3,
      "physicalID": 34
    },
    {
      "name": "eth1/36",
      "type": 3,
      "physicalID": 35
    },
    {
      "name": "eth1/37",
      "type": 3,
      "physicalID": 36
    },
    {
      "name": "eth1/38",
      "type": 3,
      "physicalID": 37
    },
    {
      "name": "eth1/39",
      "type": 3,
      "physicalID": 38
    },
    {
      "name": "eth1/40",
      "type": 3,
      "physicalID": 39
    },
    {
      "name": "eth1/41",
      "type": 3,
      "physicalID": 40
    },
    {
      "name": "eth1/42",
      "type": 3,
      "physicalID": 41
    },
    {
      "name": "eth1/43",
      "type": 3,
      "physicalID": 42
    },
    {
      "name": "eth1/44",
      "type": 3,
      "physicalID": 43
    },
    {
      "name": "eth1/45",
      "type": 3,
      "physicalID": 44
    },
    {
      "name": "eth1/46",
      "type": 3,
      "physicalID": 45
    },
    {
      "name": "eth1/47",
      "type": 3,
      "physicalID": 46
    },
    {
      "name": "eth1/48",
      "type": 3,
      "physicalID": 47
    }
  ],
  "platformSettings": {
	  "1": "/dev/uio0"
  }
}
)";
} // namespace

namespace facebook {
namespace fboss {
Wedge400CPlatformMapping::Wedge400CPlatformMapping()
    : PlatformMapping(kJsonPlatformMappingStr) {}
} // namespace fboss
} // namespace facebook
