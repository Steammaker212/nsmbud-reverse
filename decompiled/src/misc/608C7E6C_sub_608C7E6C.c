/* sub_608C7E6C
 * address: 0x608C7E6C   size: 384   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

unsigned int __fastcall sub_608C7E6C(int a1, unsigned int a2, unsigned int a3)
{
  unsigned int result; // r0
  int v6; // r1
  int v7; // r1
  int v8; // r5
  int v9; // r6
  int i; // r11
  int v11; // r4
  int v12; // r8
  unsigned int v13; // r7
  int v14; // r0
  int v15; // r1
  int v16; // r4
  int v17; // r8
  unsigned int v18; // r7
  int v19; // r0
  int v20; // r5
  void (__fastcall *v21)(_DWORD, int, _DWORD); // r3
  int v22; // r0
  int v23; // r0

  result = FIELD_U32(a1, 12);
  v6 = FIELD_U32(result, 364);
  if ( !v6 )
    return result;
  v7 = FIELD_U32(v6, 400);
  if ( v7 < 1 )
    return result;
  v8 = v7 - 1;
  v9 = 0;
  for ( i = 0; ; i = v15 )
  {
    v11 = result + v9;
    if ( *(_DWORD *)(result + v9 + 400) != 3 )
    {
      v12 = FIELD_U32(v11, 372);
      v13 = FIELD_U32(v11, 380);
      v14 = sub_608CADA0(FIELD_U32(result, 364));
      if ( v12 + sub_608C6F1C(v13, v14) >= a2 )
      {
        result = FIELD_U32(v11, 372);
        v15 = 1;
        if ( result <= a3 )
          break;
      }
    }
    result = FIELD_U32(a1, 12);
    v16 = result + v9;
    if ( *(_DWORD *)(result + v9 + 436) != 3 )
    {
      v17 = FIELD_U32(v16, 408);
      v18 = FIELD_U32(v16, 416);
      v19 = sub_608CADA0(FIELD_U32(result, 364));
      result = v17 + sub_608C6F1C(v18, v19);
      if ( result >= a2 )
      {
        result = FIELD_U32(v16, 408);
        v15 = 1;
        if ( result > a3 )
          v15 = i;
        break;
      }
    }
    v15 = i;
    if ( !v8 )
      goto LABEL_15;
LABEL_4:
    result = FIELD_U32(a1, 12);
    --v8;
    v9 += 72;
  }
  if ( v8 )
    goto LABEL_4;
LABEL_15:
  if ( (v15 & 1) != 0 )
  {
    v20 = FIELD_U32(a1, 12);
    v21 = *(void (__fastcall **)(_DWORD, int, _DWORD))(v20 + 356);
    if ( v21 )
    {
      v21(FIELD_U32(a1, 12), 3, FIELD_U32(v20, 360));
      FIELD_U32(v20, 356) = 0;
      FIELD_U32(v20, 360) = 0;
      v20 = FIELD_U32(a1, 12);
    }
    v22 = FIELD_U32(v20, 364);
    if ( v22 )
    {
      sub_608C93B0();
      sub_608C932C(FIELD_U32(v20, 364));
      v22 = 0;
      FIELD_U32(v20, 364) = 0;
      FIELD_U16(v20, 176) = 0;
      v20 = FIELD_U32(a1, 12);
    }
    v23 = sub_608C7FF0(v22, v15);
    return sub_608C825C(v23, v20);
  }
  return result;
}
