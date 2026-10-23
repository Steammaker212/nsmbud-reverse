/* sub_6019B348
 * address: 0x6019B348   size: 536   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

unsigned int __fastcall sub_6019B348(int a1, int a2)
{
  int v4; // r4
  unsigned int result; // r0
  bool v6; // zf
  int v7; // r8
  int v8; // r0
  bool v9; // zf
  int v10; // r8
  int v11; // r0
  bool v12; // zf

  v4 = dword_60CC6D78;
  sub_6081F140(dword_60CC6D78, 0);
  FIELD_U32(v4, 448) = 0;
  result = FIELD_U8(v4, 109032);
  if ( !FIELD_U8(v4, 109032) )
  {
    result = FIELD_U32(v4, 32);
    if ( result >= 2 )
    {
      if ( result == 3 )
      {
        FIELD_U32(v4, 448) = 1;
        return sub_6081F140(v4, 1);
      }
      v6 = a1 == -1;
      if ( a1 != -1 )
        v6 = a2 == -1;
      if ( !v6 )
      {
        if ( FIELD_U32(v4, 36) == 1 )
        {
          if ( sub_603F6B0C(v4 + 796, (unsigned __int8)a1, (unsigned __int8)a2) <= 2 )
          {
            FIELD_U32(v4, 448) = 3;
            sub_6081F140(v4, 2);
          }
          else
          {
            FIELD_U32(v4, 448) = 5;
          }
          if ( (FIELD_U8(dword_60CC6D78, 44) & 2) == 0 )
          {
            v7 = dword_60C99DEC;
            v8 = sub_603FD0B4(dword_60C99DEC + 16);
            v9 = v8 == 1;
            if ( v8 == 1 )
              v9 = FIELD_U32(v7, 48) == 5;
            if ( !v9 )
            {
              sub_603F7464(v4 + 796, (unsigned __int8)a1, (unsigned __int8)a2);
              return sub_6081F140(v4, 3);
            }
            sub_603F73CC(v4 + 796, (unsigned __int8)a1, (unsigned __int8)a2);
            return sub_6081F140(v4, 5);
          }
          sub_603F7338(v4 + 796, (unsigned __int8)a1, (unsigned __int8)a2);
        }
        else
        {
          if ( sub_603F6AA0(v4 + 796, (unsigned __int8)a1, (unsigned __int8)a2) <= 2 )
          {
            FIELD_U32(v4, 448) = 2;
            sub_6081F140(v4, 2);
          }
          else
          {
            FIELD_U32(v4, 448) = 4;
          }
          if ( (FIELD_U8(dword_60CC6D78, 44) & 2) == 0 )
          {
            v10 = dword_60C99DEC;
            v11 = sub_603FD0B4(dword_60C99DEC + 16);
            v12 = v11 == 1;
            if ( v11 == 1 )
              v12 = FIELD_U32(v10, 48) == 5;
            if ( !v12 )
            {
              sub_603F7420(v4 + 796, (unsigned __int8)a1, (unsigned __int8)a2);
              return sub_6081F140(v4, 3);
            }
            sub_603F737C(v4 + 796, (unsigned __int8)a1, (unsigned __int8)a2);
            return sub_6081F140(v4, 5);
          }
          sub_603F72F4(v4 + 796, (unsigned __int8)a1, (unsigned __int8)a2);
        }
        return sub_6081F140(v4, 4);
      }
    }
  }
  return result;
}
