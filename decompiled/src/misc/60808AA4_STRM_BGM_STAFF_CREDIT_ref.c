/* STRM_BGM_STAFF_CREDIT_ref
 * address: 0x60808AA4   size: 412   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall STRM_BGM_STAFF_CREDIT_ref(int a1)
{
  int v2; // r5
  int v3; // r0
  int v4; // r0
  int v6; // [sp+4h] [bp-1Ch] BYREF
  int v7; // [sp+8h] [bp-18h] BYREF
  _WORD v8[9]; // [sp+Eh] [bp-12h] BYREF

  LOBYTE(v2) = 0;
  if ( FIELD_U32(dword_60CC6B0C, 88) && !FIELD_U32(a1, 68) )
  {
    LOWORD(v2) = 0;
    v8[0] = 0;
    sub_608A8604(&v7, a1 + 72);
    sub_608A8604(&v6, a1 + 64);
    if ( v7 )
    {
      sub_608B72E8(v7, 0, v8);
      if ( !v8[0] )
        goto LABEL_12;
      v3 = v7;
      if ( !v7 )
        goto LABEL_11;
    }
    else
    {
      LOWORD(v2) = 0;
      if ( !v6 )
      {
LABEL_18:
        sub_608A86F0(&v6);
        sub_608A86F0(&v7);
        return (unsigned __int8)v2;
      }
      sub_608B72E8(v6, 0, v8);
      if ( !v8[0] )
      {
LABEL_12:
        if ( !strcmp(*(const char **)(dword_60CC6B0C + 88), "STRM_BGM_STAFF_CREDIT") )
        {
          LOBYTE(v2) = sub_60808C4C(a1, (__int16)v2);
        }
        else
        {
          v4 = (__int16)v2;
          LOBYTE(v2) = 0;
          if ( v4 >= 0 && !FIELD_U8(a1, 144) )
          {
            switch ( v4 )
            {
              case 0:
                goto LABEL_18;
              case 1:
                LOBYTE(v2) = 9;
                break;
              case 2:
                LOBYTE(v2) = 3;
                break;
              case 3:
                LOBYTE(v2) = 5;
                break;
              case 4:
              case 5:
              case 6:
              case 7:
                v2 = (1 << v4) | 1;
                break;
              default:
                LOBYTE(v2) = 1;
                break;
            }
          }
        }
        goto LABEL_18;
      }
      v3 = v6;
      if ( !v6 )
      {
LABEL_11:
        LOWORD(v2) = v8[0];
        goto LABEL_12;
      }
    }
    sub_608B7318(v3, 0, 0);
    goto LABEL_11;
  }
  return (unsigned __int8)v2;
}
