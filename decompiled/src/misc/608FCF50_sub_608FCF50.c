/* sub_608FCF50
 * address: 0x608FCF50   size: 688   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int sub_608FCF50()
{
  int v0; // r4
  _BYTE v2[8]; // [sp+0h] [bp-20h] BYREF
  _BYTE v3[24]; // [sp+8h] [bp-18h] BYREF

  nn__oe__GetDesiredLanguage((nn__oe *)v2);
  v0 = 0;
  nn__settings__LanguageCode__Make(v3, 0);
  if ( !nn__settings__operator_eq(v3, v2) )
  {
    v0 = 1;
    nn__settings__LanguageCode__Make(v3, 1);
    if ( !nn__settings__operator_eq(v3, v2) )
    {
      nn__settings__LanguageCode__Make(v3, 12);
      if ( !nn__settings__operator_eq(v3, v2) )
      {
        nn__settings__LanguageCode__Make(v3, 2);
        v0 = 3;
        if ( !nn__settings__operator_eq(v3, v2) )
        {
          nn__settings__LanguageCode__Make(v3, 13);
          if ( !nn__settings__operator_eq(v3, v2) )
          {
            nn__settings__LanguageCode__Make(v3, 3);
            v0 = 4;
            if ( !nn__settings__operator_eq(v3, v2) )
            {
              nn__settings__LanguageCode__Make(v3, 4);
              v0 = 5;
              if ( !nn__settings__operator_eq(v3, v2) )
              {
                nn__settings__LanguageCode__Make(v3, 5);
                v0 = 2;
                if ( !nn__settings__operator_eq(v3, v2) )
                {
                  nn__settings__LanguageCode__Make(v3, 14);
                  if ( !nn__settings__operator_eq(v3, v2) )
                  {
                    nn__settings__LanguageCode__Make(v3, 6);
                    v0 = 10;
                    if ( !nn__settings__operator_eq(v3, v2) )
                    {
                      nn__settings__LanguageCode__Make(v3, 11);
                      if ( !nn__settings__operator_eq(v3, v2) )
                      {
                        nn__settings__LanguageCode__Make(v3, 15);
                        if ( !nn__settings__operator_eq(v3, v2) )
                        {
                          nn__settings__LanguageCode__Make(v3, 16);
                          if ( !nn__settings__operator_eq(v3, v2) )
                          {
                            nn__settings__LanguageCode__Make(v3, 7);
                            v0 = 9;
                            if ( !nn__settings__operator_eq(v3, v2) )
                            {
                              nn__settings__LanguageCode__Make(v3, 8);
                              v0 = 7;
                              if ( !nn__settings__operator_eq(v3, v2) )
                              {
                                nn__settings__LanguageCode__Make(v3, 9);
                                v0 = 6;
                                if ( !nn__settings__operator_eq(v3, v2) )
                                {
                                  nn__settings__LanguageCode__Make(v3, 10);
                                  v0 = nn__settings__operator_eq(v3, v2);
                                  if ( v0 )
                                    return 8;
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  return v0;
}
