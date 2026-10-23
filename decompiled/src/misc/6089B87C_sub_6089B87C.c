/* sub_6089B87C
 * address: 0x6089B87C   size: 324   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6089B87C(int a1, int (__fastcall *a2)(_DWORD *), int a3, int a4, int a5)
{
  int v8; // r5
  int result; // r0
  int v10; // r0
  int v11; // r6
  int v12; // r7
  bool v13; // zf
  bool v14; // zf
  bool v15; // zf
  int v16; // r0
  int v17; // r7
  int v18; // r1
  _DWORD v19[13]; // [sp+Ch] [bp-34h] BYREF

  v8 = (int)a2;
  if ( *(_BYTE *)(FIELD_U32(a3, 348) + 448)
    || (a2 = *(int (__fastcall **)(_DWORD *))(a3 + 16), result = 0, a2 != (int (__fastcall *)(_DWORD *))63) )
  {
    v19[0] = v8;
    v19[1] = a3;
    v19[2] = FIELD_U32(a5, 12);
    v19[3] = a4;
    v19[4] = a5;
    v10 = FIELD_U32(a3, 712);
    v11 = FIELD_U32(a3, 704);
    v12 = FIELD_U32(a3, 708);
    v13 = v10 == 0;
    if ( v10 )
    {
      a2 = *(int (__fastcall **)(_DWORD *))(v10 + 20);
      v13 = a2 == 0;
    }
    if ( !v13 && a2(v19) )
      goto LABEL_18;
    v14 = v11 == 0;
    if ( v11 )
    {
      a2 = *(int (__fastcall **)(_DWORD *))(v11 + 20);
      v14 = a2 == 0;
    }
    if ( !v14 && a2(v19) )
      goto LABEL_18;
    v15 = v12 == 0;
    if ( v12 )
    {
      a2 = *(int (__fastcall **)(_DWORD *))(v12 + 20);
      v15 = a2 == 0;
    }
    if ( !v15 && a2(v19) == 1 )
      goto LABEL_18;
    v16 = FIELD_U32(a5, 12);
    if ( v16 == 3 || (v17 = *(_DWORD *)(FIELD_U32(a3, 348) + 4 * v16 + 584)) == 0 )
    {
      nullsub_95();
      return 0;
    }
    sub_60835BF8(v8, FIELD_U32(v17, 4), 63);
    v18 = sub_6089B9C0(a1, v8, a3, v17, a4, a5);
    result = 0;
    if ( v18 == 1 )
    {
LABEL_18:
      result = 1;
      FIELD_U8(a3, 9) = 1;
    }
  }
  return result;
}
