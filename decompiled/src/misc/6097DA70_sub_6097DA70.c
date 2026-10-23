/* sub_6097DA70
 * address: 0x6097DA70   size: 328   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6097DA70(int a1, int a2)
{
  int v4; // r6
  _BYTE *v5; // r7
  const char **v6; // r0
  int v7; // r0
  int v8; // r7
  int v9; // r7
  int v10; // t1
  _DWORD *v11; // r0
  int result; // r0

  v4 = sub_609908C0();
  v5 = (_BYTE *)(a1 + 170);
  FIELD_U8(a1, 64) |= 1u;
  FIELD_U32(a1, 176) = sub_6097DC6C(v4, a1);
  if ( sub_6085982C(a1, "CaptureWorkFormat") )
    *v5 |= 4u;
  v6 = sub_6085982C(a1, "CaptureOutputAlpha");
  if ( v6 && *(_DWORD *)&v6[1][(_DWORD)v6] == 255 )
    *v5 |= 8u;
  if ( !FIELD_U32(a1, 176) )
    *v5 |= 0x20u;
  v7 = sub_6098F0E0(v4, a1, a2);
  FIELD_U32(a1, 180) = v7;
  if ( v7 )
    sub_609A70BC(v7, 1);
  v8 = FIELD_U32(a2, 72);
  if ( v8 )
  {
    v10 = FIELD_U32(v8, 92);
    v9 = v8 + 92;
    (*(void (__fastcall **)(int))(v10 + 12))(v9);
    v11 = (_DWORD *)(v9 + 4);
  }
  else
  {
    v11 = (_DWORD *)(a2 + 28);
  }
  ((void (__fastcall *)(int, int, _DWORD))loc_6097DDB0)(a1, v4, *v11);
  FIELD_U32(a1, 240) = a1 + 280;
  FIELD_U32(a1, 80) = 1065353216;
  FIELD_U32(a1, 84) = 0;
  FIELD_U32(a1, 88) = 0;
  FIELD_U32(a1, 92) = 0;
  FIELD_U32(a1, 96) = 0;
  FIELD_U32(a1, 100) = 1065353216;
  FIELD_U32(a1, 104) = 0;
  FIELD_U32(a1, 108) = 0;
  FIELD_U32(a1, 112) = 0;
  FIELD_U32(a1, 116) = 0;
  FIELD_U32(a1, 120) = 1065353216;
  FIELD_U32(a1, 124) = 0;
  FIELD_U8(a1, 64) |= 0x40u;
  result = FIELD_U32(a2, 72);
  if ( result )
    FIELD_U8(result, 130) |= 0x10u;
  return result;
}
