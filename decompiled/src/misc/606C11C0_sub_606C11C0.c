/* sub_606C11C0
 * address: 0x606C11C0   size: 208   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_606C11C0(int a1)
{
  unsigned int v2; // r1
  int v3; // r0
  float v4; // s4
  float v5; // s2

  v2 = FIELD_U32(a1, 6112);
  if ( !v2 )
    goto LABEL_4;
  v3 = ActorMgrRelated_getById(ActorMgr__instance + 27168, v2);
  if ( v3 )
  {
    v4 = FIELD_F32(v3, 116) + FIELD_F32(a1, 6108);
    v5 = FIELD_F32(v3, 112) + FIELD_F32(a1, 6104);
    FIELD_F32(a1, 108) = FIELD_F32(v3, 108) + FIELD_F32(a1, 6100);
    FIELD_F32(a1, 112) = v5;
    FIELD_F32(a1, 116) = v4;
    FIELD_U8(a1, 6116) = FIELD_U8(v3, 6246);
    FIELD_U8(a1, 6117) = FIELD_U8(v3, 6212);
LABEL_4:
    (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 200))(a1);
    StateMgr__execute((StateMgr *)(a1 + 6084));
    return 1;
  }
  return 0;
}
