/* sub_604B4644
 * address: 0x604B4644   size: 1020   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_604B4644(int a1)
{
  int result; // r0
  _BYTE *v3; // r5
  _BYTE *v4; // r6
  float v5; // s18
  float v6; // s16
  _BYTE *v7; // r7
  float v8[12]; // [sp+0h] [bp-30h] BYREF

  result = sub_607F6ABC(dword_60CC62E4);
  if ( !result )
  {
    v3 = (_BYTE *)(a1 + 14942);
    result = FIELD_U8(a1, 14942);
    if ( !FIELD_U8(a1, 14942) )
    {
      result = FIELD_U8(a1, 14939);
      if ( FIELD_U8(a1, 14939) )
      {
        v4 = (_BYTE *)(a1 + 14944);
        result = FIELD_U8(a1, 14944);
        if ( !FIELD_U8(a1, 14944) )
        {
          result = dword_60CA1910;
          if ( !FIELD_U8(dword_60CA1910, 38089) )
          {
            result = sub_604B2014((unsigned __int8 *)dword_60CA1910);
            if ( !result )
            {
              v5 = (float)FIELD_S32(dword_60C9CF0C, 1416) + -640.0;
              v6 = 360.0 - (float)FIELD_S32(dword_60C9CF0C, 1420);
              v8[0] = v5;
              v8[1] = v6;
              v7 = (_BYTE *)(a1 + 14943);
              if ( FIELD_U8(a1, 14943) )
              {
                if ( (FIELD_U8(a1, 15221) & 0x10) != 0 )
                {
                  result = FIELD_U8(a1, 14940);
                  if ( !FIELD_U8(a1, 14940) )
                  {
                    if ( FIELD_U8(a1, 14941) )
                    {
                      result = a1 + 14820;
                      if ( FIELD_F32(a1, 14820) <= v5 )
                      {
                        result = a1 + 14828;
                        if ( v5 <= FIELD_F32(a1, 14828) )
                        {
                          result = a1 + 14824;
                          if ( FIELD_F32(a1, 14824) <= v6 )
                          {
                            result = a1 + 14832;
                            if ( v6 <= FIELD_F32(a1, 14832) )
                            {
                              sub_604741D8(*(_DWORD **)(a1 + 4), 9u, &dword_60CA1B7C, 0);
                              FIELD_U32(dword_60CA1910, 38084) = 2;
                              *v3 = 1;
                              *v4 = 1;
                              return 1;
                            }
                          }
                        }
                      }
                    }
                    else
                    {
                      result = a1 + 14804;
                      if ( FIELD_F32(a1, 14804) <= v5 )
                      {
                        result = a1 + 14812;
                        if ( v5 <= FIELD_F32(a1, 14812) )
                        {
                          result = a1 + 14808;
                          if ( FIELD_F32(a1, 14808) <= v6 )
                          {
                            result = a1 + 14816;
                            if ( v6 <= FIELD_F32(a1, 14816) )
                            {
                              sub_60473DE4(*(_DWORD **)(a1 + 4), 9u, &dword_60CA1B7C, 0);
                              result = dword_60CA1910;
                              FIELD_U32(dword_60CA1910, 38084) = 1;
                              *v3 = 1;
                              *v4 = 1;
                            }
                          }
                        }
                      }
                    }
                  }
                }
                else
                {
                  *v7 = 0;
                  FIELD_U8(a1, 14940) = 0;
                  return 0;
                }
              }
              else
              {
                if ( !sub_604B55FC(a1, v8) )
                {
                  if ( FIELD_U8(a1, 14941) )
                  {
                    if ( FIELD_F32(a1, 14820) <= v5
                      && v5 <= FIELD_F32(a1, 14828)
                      && FIELD_F32(a1, 14824) <= v6
                      && v6 <= FIELD_F32(a1, 14832) )
                    {
                      sub_604741D8(*(_DWORD **)(a1 + 4), 9u, &dword_60CA1B7C, 0);
                      FIELD_U32(dword_60CA1910, 38084) = 2;
                      *v3 = 1;
                      *v4 = 1;
                    }
                  }
                  else if ( FIELD_F32(a1, 14804) <= v5
                         && v5 <= FIELD_F32(a1, 14812)
                         && FIELD_F32(a1, 14808) <= v6
                         && v6 <= FIELD_F32(a1, 14816) )
                  {
                    sub_60473DE4(*(_DWORD **)(a1 + 4), 9u, &dword_60CA1B7C, 0);
                    FIELD_U32(dword_60CA1910, 38084) = 1;
                    *v3 = 1;
                    *v4 = 1;
                  }
                }
                if ( FIELD_U8(AreaTask_intance, 1872) )
                {
                  *v7 = 1;
                  return 1;
                }
                else
                {
                  FIELD_U8(a1, 14940) = 0;
                  return 14940;
                }
              }
            }
          }
        }
      }
    }
  }
  return result;
}
