/* sub_60590684
 * address: 0x60590684   size: 232   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60590684(int a1)
{
  float v2; // s0
  float v3; // s0

  v2 = FIELD_F32(a1, 108);
  if ( (float)(FIELD_F32(dword_60CC6484, 112) + -300.0) < v2 && (float)(FIELD_F32(dword_60CC6484, 120) + 300.0) > v2 )
  {
    DrawMgr_drawModel2(DrawMgr_instance, *(_DWORD **)(a1 + 644));
    DrawMgr_drawModel2(DrawMgr_instance, *(_DWORD **)(a1 + 652));
  }
  DrawMgr_drawModel2(DrawMgr_instance, *(_DWORD **)(a1 + 648));
  v3 = FIELD_F32(a1, 676);
  if ( (float)(FIELD_F32(dword_60CC6484, 112) + -32.0) < v3 && (float)(FIELD_F32(dword_60CC6484, 120) + 32.0) > v3 )
    DrawMgr_drawModel2(DrawMgr_instance, *(_DWORD **)(a1 + 656));
  (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 140))(a1);
  return 1;
}
