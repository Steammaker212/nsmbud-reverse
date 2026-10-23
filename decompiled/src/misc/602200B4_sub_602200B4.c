/* sub_602200B4
 * address: 0x602200B4   size: 392   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

bool __fastcall sub_602200B4(int a1, int *a2, int a3)
{
  int v3; // r1
  _BOOL4 result; // r0
  bool v6; // zf
  int v7; // r0
  int v8; // r6
  int v9; // r5
  int v10; // r6
  _BOOL4 v11; // r8
  _BOOL4 v12; // r7
  _BOOL4 v13; // r6
  _DWORD v14[2]; // [sp+4h] [bp-24h] BYREF
  unsigned int v15; // [sp+Ch] [bp-1Ch]

  v3 = *a2;
  result = 0;
  v6 = v3 == 1;
  if ( v3 == 1 )
    v6 = *(_DWORD *)a3 == 1;
  if ( v6 )
  {
    v14[0] = -1;
    v14[1] = -1;
    v15 = -1;
    v7 = sub_601CF9C0(dword_60C8AEF0);
    sub_6019EC34(v14, (_DWORD *)(v7 + 1032));
    result = 0;
    if ( v14[0] == 1 )
    {
      v8 = sub_601A443C(dword_60C89E18, *(_DWORD *)a3, FIELD_U32(a3, 4));
      v9 = sub_60183038(v8, v15, 256);
      v10 = sub_60183038(v8, FIELD_U32(a3, 8), 256);
      v11 = 1;
      v12 = 1;
      if ( !sub_601D9FC4((int)v14) )
      {
        v12 = 1;
        if ( !sub_601D9FC4((int)v14) )
        {
          v12 = 1;
          if ( !sub_601D9FC4((int)v14) )
          {
            v12 = 1;
            if ( !sub_601D9FC4((int)v14) )
              v12 = sub_601D9FC4((int)v14);
          }
        }
      }
      if ( !sub_601D9FC4(a3) && !sub_601D9FC4(a3) && !sub_601D9FC4(a3) && !sub_601D9FC4(a3) )
        v11 = sub_601D9FC4(a3);
      v13 = v10 != 0;
      return (v9 != 0 || v12) && (v13 || v11);
    }
  }
  return result;
}
