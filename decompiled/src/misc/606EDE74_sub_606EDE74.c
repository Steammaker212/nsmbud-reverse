/* sub_606EDE74
 * address: 0x606EDE74   size: 340   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_606EDE74(int a1, _BYTE *a2)
{
  int v4; // r4
  _DWORD *v5; // r7
  float *v6; // r5

  v4 = 0;
  v5 = *(_DWORD **)(a1 + 6512);
  if ( v5 )
  {
    do
    {
      if ( *v5 )
        v4 |= sub_606ED9B4(*(_DWORD *)(*v5 + 2196));
      v5 = (_DWORD *)v5[1];
    }
    while ( v5 );
    if ( v4 && !*a2 )
    {
      lift_trampoline_ref(a1 + 6100);
      sub_6040B3B0((_BYTE *)dword_60C9A1F0, FIELD_U8(dword_60C9A1F0, 6532));
      *a2 = 1;
    }
    v6 = (float *)(a1 + 108);
    if ( (v4 & 1) != 0 )
      SE_OBJ_TRPLN_BOUND_ref(FIELD_U32(PlayerMgr_instance, 48), v6, 5.2, 0.5);
    if ( (v4 & 2) != 0 )
      SE_OBJ_TRPLN_BOUND_ref(FIELD_U32(PlayerMgr_instance, 52), v6, 5.2, 0.5);
    if ( (v4 & 4) != 0 )
      SE_OBJ_TRPLN_BOUND_ref(FIELD_U32(PlayerMgr_instance, 56), v6, 5.2, 0.5);
    if ( (v4 & 8) != 0 )
      SE_OBJ_TRPLN_BOUND_ref(FIELD_U32(PlayerMgr_instance, 60), v6, 5.2, 0.5);
  }
  return v4;
}
