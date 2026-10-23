/* sub_605C0D88
 * address: 0x605C0D88   size: 164   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_605C0D88(int a1, float a2)
{
  int v3; // r0
  int v4; // r1
  bool v5; // zf

  CollisionMgr_process((_BYTE *)(a1 + 648), a2);
  v3 = a1 + 6968;
  v4 = FIELD_U16(a1, 6968);
  v5 = v4 == 0;
  if ( FIELD_U16(a1, 6968) )
    LOWORD(v4) = v4 - 1;
  else
    v3 = 1;
  if ( v5 )
    FIELD_U8(a1, 19) = v3;
  else
    *(_WORD *)v3 = v4;
  if ( FIELD_U16(a1, 6972) )
    ShapedCollider_execute((ColliderBase *)(a1 + 6120));
  FIELD_U8(a1, 6845) = 0;
  FIELD_U8(a1, 6916) = -1;
  FIELD_U8(a1, 6917) = -1;
  FIELD_U8(a1, 6928) = -1;
  FIELD_U8(a1, 6929) = -1;
  FIELD_U8(a1, 6940) = -1;
  FIELD_U8(a1, 6941) = -1;
  FIELD_U8(a1, 6952) = -1;
  FIELD_U8(a1, 6953) = -1;
  return 1;
}
