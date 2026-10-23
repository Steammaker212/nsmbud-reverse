/* sub_601133B4
 * address: 0x601133B4   size: 252   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_601133B4(int a1)
{
  _DWORD *v2; // r0
  int v3; // r6
  _DWORD *v4; // r1
  unsigned int v5; // r2
  unsigned int v6; // r0
  _DWORD *v7; // r3
  int v8; // r6
  unsigned int v9; // r1
  unsigned int v10; // r2
  int v11; // r0
  int result; // r0

  v3 = a1 + 7100;
  v2 = *(_DWORD **)(a1 + 7100);
  v4 = (_DWORD *)v2[3];
  v5 = v2[2];
  v6 = v2[17];
  if ( v5 > v6 )
    v4 += v6;
  if ( sub_60418548(*v4 + 4) )
  {
    sub_60813578(a1 + 6332, "mVoiceLabel");
    sub_60813430(a1 + 6332, "SE_VOC_JR_GO", 0);
    FIELD_U32(a1, 7092) = 16779447;
  }
  v7 = *(_DWORD **)v3;
  v8 = *(_DWORD *)(*(_DWORD *)v3 + 12);
  v9 = v7[2];
  v10 = v7[17];
  v11 = v8;
  if ( v9 > v10 )
    v11 = v8 + 4 * v10;
  if ( *(float *)(*(_DWORD *)v11 + 20) >= 23.0 )
  {
    FIELD_U8(a1, 7645) = 1;
    v8 = v7[3];
    v9 = v7[2];
    v10 = v7[17];
  }
  if ( v9 > v10 )
    v8 += 4 * v10;
  result = *(unsigned __int8 *)(*(_DWORD *)v8 + 28);
  if ( (result & 0x20) != 0 )
    return (*(int (__fastcall **)(int, int *))(*(_DWORD *)a1 + 192))(a1, &dword_60C86A24);
  return result;
}
