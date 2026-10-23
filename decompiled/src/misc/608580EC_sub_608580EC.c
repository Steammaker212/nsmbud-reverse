/* sub_608580EC
 * address: 0x608580EC   size: 720   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

unsigned __int8 *__fastcall sub_608580EC(_BYTE *a1, unsigned __int8 *a2)
{
  unsigned __int8 *v2; // r2
  _BYTE *v3; // r0
  unsigned __int8 *result; // r0

  if ( *a2 )
  {
    a1[136] = *a2;
    v2 = a2 + 1;
    if ( a2[1] )
    {
      a1[137] = a2[1];
      v2 = a2 + 2;
      if ( a2[2] )
      {
        a1[138] = a2[2];
        v2 = a2 + 3;
        if ( a2[3] )
        {
          a1[139] = a2[3];
          v2 = a2 + 4;
          if ( a2[4] )
          {
            a1[140] = a2[4];
            v2 = a2 + 5;
            if ( a2[5] )
            {
              a1[141] = a2[5];
              v2 = a2 + 6;
              if ( a2[6] )
              {
                a1[142] = a2[6];
                v2 = a2 + 7;
                if ( a2[7] )
                {
                  a1[143] = a2[7];
                  v2 = a2 + 8;
                  if ( a2[8] )
                  {
                    a1[144] = a2[8];
                    v2 = a2 + 9;
                    if ( a2[9] )
                    {
                      a1[145] = a2[9];
                      v2 = a2 + 10;
                      if ( a2[10] )
                      {
                        a1[146] = a2[10];
                        v2 = a2 + 11;
                        if ( a2[11] )
                        {
                          a1[147] = a2[11];
                          v2 = a2 + 12;
                          if ( a2[12] )
                          {
                            a1[148] = a2[12];
                            v2 = a2 + 13;
                            if ( a2[13] )
                            {
                              a1[149] = a2[13];
                              v2 = a2 + 14;
                              if ( a2[14] )
                              {
                                a1[150] = a2[14];
                                v2 = a2 + 15;
                                if ( a2[15] )
                                {
                                  a1[151] = a2[15];
                                  v2 = a2 + 16;
                                  if ( a2[16] )
                                  {
                                    a1[152] = a2[16];
                                    v2 = a2 + 17;
                                    if ( a2[17] )
                                    {
                                      a1[153] = a2[17];
                                      v2 = a2 + 18;
                                      if ( a2[18] )
                                      {
                                        a1[154] = a2[18];
                                        v2 = a2 + 19;
                                        if ( a2[19] )
                                        {
                                          a1[155] = a2[19];
                                          v2 = a2 + 20;
                                          if ( a2[20] )
                                          {
                                            a1[156] = a2[20];
                                            v2 = a2 + 21;
                                            if ( a2[21] )
                                            {
                                              a1[157] = a2[21];
                                              v2 = a2 + 22;
                                              if ( a2[22] )
                                              {
                                                a1[158] = a2[22];
                                                v2 = a2 + 23;
                                                if ( a2[23] )
                                                {
                                                  a1[159] = a2[23];
                                                  v3 = a1 + 160;
                                                  a2 += 24;
                                                  goto LABEL_51;
                                                }
                                                v3 = a1 + 159;
                                              }
                                              else
                                              {
                                                v3 = a1 + 158;
                                              }
                                            }
                                            else
                                            {
                                              v3 = a1 + 157;
                                            }
                                          }
                                          else
                                          {
                                            v3 = a1 + 156;
                                          }
                                        }
                                        else
                                        {
                                          v3 = a1 + 155;
                                        }
                                      }
                                      else
                                      {
                                        v3 = a1 + 154;
                                      }
                                    }
                                    else
                                    {
                                      v3 = a1 + 153;
                                    }
                                  }
                                  else
                                  {
                                    v3 = a1 + 152;
                                  }
                                }
                                else
                                {
                                  v3 = a1 + 151;
                                }
                              }
                              else
                              {
                                v3 = a1 + 150;
                              }
                            }
                            else
                            {
                              v3 = a1 + 149;
                            }
                          }
                          else
                          {
                            v3 = a1 + 148;
                          }
                        }
                        else
                        {
                          v3 = a1 + 147;
                        }
                      }
                      else
                      {
                        v3 = a1 + 146;
                      }
                    }
                    else
                    {
                      v3 = a1 + 145;
                    }
                  }
                  else
                  {
                    v3 = a1 + 144;
                  }
                }
                else
                {
                  v3 = a1 + 143;
                }
              }
              else
              {
                v3 = a1 + 142;
              }
            }
            else
            {
              v3 = a1 + 141;
            }
          }
          else
          {
            v3 = a1 + 140;
          }
        }
        else
        {
          v3 = a1 + 139;
        }
      }
      else
      {
        v3 = a1 + 138;
      }
    }
    else
    {
      v3 = a1 + 137;
    }
    a2 = v2;
  }
  else
  {
    v3 = a1 + 136;
  }
LABEL_51:
  *v3 = 0;
  result = (unsigned __int8 *)*a2;
  if ( *a2 )
  {
    result = a2 + 1;
    while ( *result++ )
      ;
  }
  return result;
}
