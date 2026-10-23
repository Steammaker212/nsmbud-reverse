/* sub_60965F80
 * address: 0x60965F80   size: 440   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_60965F80(int a1, int a2, int a3)
{
  int v6; // r0
  int v7; // r1
  int v8; // r8
  int v9; // r1
  int v10; // r1
  int v11; // r1
  bool v12; // zf
  int v13; // r1
  int v14; // r1

  if ( !FIELD_U8(a1, 204) && FIELD_U8(a1, 108) && !FIELD_U8(a1, 188) )
    nullsub_120();
  sub_6091AE0C(a1 + 1736, a2);
  v6 = sub_609200B8(a1 + 352);
  v7 = FIELD_U16(a1, 380);
  if ( v6 > v7 )
    v7 = v6;
  if ( v7 - 1 == a3 )
  {
    v8 = a1 + 336;
    if ( FIELD_U8(a1, 204) )
    {
      if ( FIELD_U8(a1, 108) )
      {
        if ( FIELD_U8(a1, 188) )
        {
          v9 = FIELD_U32(a1, 324);
          if ( v9 )
          {
            sub_6093EA98(dword_60CD09F8, v9);
            FIELD_U32(a1, 324) = 0;
          }
          v10 = FIELD_U32(a1, 1032);
          if ( v10 )
          {
            sub_6093EA98(dword_60CD09F8, v10);
            FIELD_U32(a1, 1032) = 0;
          }
          v11 = FIELD_U32(a1, 1384);
          if ( v11 )
          {
LABEL_25:
            sub_6093EA98(dword_60CD09F8, v11);
            FIELD_U32(a1, 1384) = 0;
            FIELD_U32(a1, 320) = v8;
            return;
          }
        }
        else
        {
          if ( a3 )
          {
            nullsub_121();
            FIELD_U32(a1, 320) = v8;
            return;
          }
          nullsub_120();
        }
      }
    }
    else
    {
      v12 = FIELD_U8(a1, 188) == 0;
      if ( FIELD_U8(a1, 188) )
        v12 = FIELD_U8(a1, 108) == 0;
      if ( !v12 )
      {
        v13 = FIELD_U32(a1, 324);
        if ( v13 )
        {
          sub_6093EA98(dword_60CD09F8, v13);
          FIELD_U32(a1, 324) = 0;
        }
        v14 = FIELD_U32(a1, 1032);
        if ( v14 )
        {
          sub_6093EA98(dword_60CD09F8, v14);
          FIELD_U32(a1, 1032) = 0;
        }
        v11 = FIELD_U32(a1, 1384);
        if ( v11 )
          goto LABEL_25;
      }
    }
    FIELD_U32(a1, 320) = v8;
  }
}
