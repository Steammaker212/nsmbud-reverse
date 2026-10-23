/* sub_60807C58
 * address: 0x60807C58   size: 408   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60807C58(int a1)
{
  int v2; // r0
  bool v3; // zf
  int result; // r0
  bool v5; // zf
  int *v6; // r5
  int *v7; // r6
  int v8; // r7
  int v9; // r1
  int v10; // r0
  int v11; // r0
  int v12; // r6
  int v13; // r7
  int v14; // r0
  _BYTE v15[4]; // [sp+0h] [bp-50h] BYREF
  int v16; // [sp+4h] [bp-4Ch]
  _DWORD v17[7]; // [sp+34h] [bp-1Ch] BYREF

  v2 = FIELD_U32(a1, 76);
  v3 = v2 == 0;
  if ( v2 )
    v3 = FIELD_U8(a1, 45) == 0;
  if ( !v3 && sub_608AF468(v2) != 1 )
    goto LABEL_32;
  result = FIELD_U32(a1, 72);
  v5 = result == 0;
  if ( result )
    v5 = FIELD_U8(a1, 45) == 0;
  if ( !v5 )
  {
    result = sub_608AF468(result);
    if ( !result )
    {
LABEL_32:
      v6 = (int *)(a1 + 72);
      result = FIELD_U32(a1, 72);
      if ( result )
      {
        sub_608AE25C(v17, a1 + 76);
        if ( v17[0] )
        {
          sub_608BC754(v17[0], v15);
          if ( v15[0] )
          {
            v7 = (int *)(a1 + 136);
            v8 = FIELD_U32(a1, 136);
            if ( v17[0] )
            {
              if ( v8 == sub_608BC76C() )
                return sub_608AE348(v17);
LABEL_18:
              if ( v17[0] )
              {
                v9 = sub_608BC76C();
                v10 = v17[0];
                *v7 = v9;
                if ( v10 )
                  v11 = sub_608BC794(v10, 1);
                else
                  v11 = -1;
              }
              else
              {
                v11 = -1;
                *v7 = -1;
              }
              v12 = -1;
              v13 = -1;
              if ( (v16 | v11) >= 0 )
                v13 = 1000LL * v11 / (unsigned __int64)v16;
              v14 = *v6;
              if ( *v6 )
              {
                v12 = FIELD_U32(v14, 220);
                sub_608AF208(v14, 0);
              }
              sub_608AC1C0(a1 + 72);
              sub_60809604(a1, a1 + 72, v12, v13);
              if ( FIELD_U32(a1, 72) )
              {
                sub_608AF1FC();
                FIELD_U8(a1, 144) = 1;
              }
              return sub_608AE348(v17);
            }
            if ( v8 != -1 )
              goto LABEL_18;
          }
          return sub_608AE348(v17);
        }
        v7 = (int *)(a1 + 136);
        if ( FIELD_U32(a1, 136) == -1 )
          return sub_608AE348(v17);
        goto LABEL_18;
      }
    }
  }
  return result;
}
