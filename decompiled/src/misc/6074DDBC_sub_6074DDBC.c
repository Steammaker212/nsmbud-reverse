/* sub_6074DDBC
 * address: 0x6074DDBC   size: 252   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6074DDBC(int a1)
{
  int v2; // r0
  int v3; // r4
  float v5; // [sp+1Ch] [bp-34h]
  float v6; // [sp+2Ch] [bp-24h]

  v2 = FIELD_U32(a1, 652);
  if ( v2 )
    FIELD_U32(a1, 652) = v2 - 1;
  if ( FIELD_U8(a1, 535) )
  {
    j_ModelWrapper_updateAnims(*(ModelWrapper **)(a1 + 648));
    sub_604218E0(*(float **)(a1 + 648));
  }
  StateMgr__execute((StateMgr *)(a1 + 736));
  sub_60233544(dword_60C8D904);
  if ( FIELD_U8(a1, 535) )
  {
    v5 = FIELD_F32(a1, 712) + FIELD_F32(a1, 692);
    v6 = FIELD_F32(a1, 708) + 0.0;
    FIELD_F32(a1, 108) = FIELD_F32(a1, 676) + 0.0;
    FIELD_F32(a1, 112) = v5;
    FIELD_F32(a1, 116) = v6;
    v3 = **(_DWORD **)(a1 + 648);
    (*(void (__fastcall **)(int))(*(_DWORD *)v3 + 60))(v3);
    (*(void (__fastcall **)(int))(*(_DWORD *)v3 + 52))(v3);
    (*(void (__fastcall **)(int))(*(_DWORD *)v3 + 56))(v3);
  }
  return 1;
}
