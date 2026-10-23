/* sub_605E0D80
 * address: 0x605E0D80   size: 316   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_605E0D80(int a1)
{
  int result; // r0
  unsigned int *v3; // r1
  int v4; // r1
  int *v5; // r5
  int v6; // r2
  bool v7; // zf
  int v8; // r0

  v3 = (unsigned int *)(a1 + 6264);
  result = FIELD_U32(a1, 6264);
  if ( (result & 0x20000000) != 0 )
    return result;
  *v3 = result & 0xDF7FFFFF | 0x20000000;
  v4 = 0;
  FIELD_U32(a1, 6792) = 0;
  v5 = (int *)(a1 + 6792);
  v6 = FIELD_U32(a1, 6260);
  if ( (v6 & 2) != 0 )
    goto LABEL_6;
  v7 = FIELD_U8(a1, 19) == 0;
  if ( !FIELD_U8(a1, 19) )
  {
    v4 = 3;
    v7 = (result & 0x20000) == 0;
  }
  if ( !v7 )
    goto LABEL_6;
  if ( (v6 & 0x400) != 0 )
  {
    if ( sub_605DBDAC(a1) )
      v4 = (FIELD_U8(a1, 538) & 1) + 1;
    else
      v4 = 2;
LABEL_6:
    *v5 = v4;
    goto LABEL_7;
  }
  if ( (v6 & 0x800) != 0 )
  {
    v8 = sub_605E42F0(a1);
    v4 = 0;
    if ( v8 )
      v4 = FIELD_U8(v8, 84) != 255;
    goto LABEL_6;
  }
  sub_605E0EC0(a1);
  v4 = *v5;
LABEL_7:
  result = v4 - 1;
  if ( (unsigned int)(v4 - 1) <= 1 )
  {
    FIELD_U32(a1, 6804) = 0;
    CollisionMgr_vf14(a1 + 648);
    if ( *v5 == 2 )
      sub_605D79D0(a1, (StateBase *)&unk_60CB1788, 0);
    sub_605D845C((_DWORD *)a1);
    (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 424))(a1);
    (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 432))(a1);
    return sub_605E5144(a1);
  }
  return result;
}
