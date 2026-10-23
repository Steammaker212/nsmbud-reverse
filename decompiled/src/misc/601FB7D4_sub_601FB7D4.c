/* sub_601FB7D4
 * address: 0x601FB7D4   size: 468   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_601FB7D4(int a1)
{
  char v2; // r12
  int v3; // r0
  Vec3 v5; // [sp+4h] [bp-54h] BYREF
  _BYTE v6[12]; // [sp+10h] [bp-48h] BYREF
  float v7; // [sp+1Ch] [bp-3Ch]
  float v8; // [sp+2Ch] [bp-2Ch]
  float v9; // [sp+3Ch] [bp-1Ch]

  sub_601861EC((Actor *)a1);
  v3 = FIELD_U32(a1, 272);
  if ( v3 == 2 )
  {
    FIELD_U32(a1, 180) += (int)(float)((float)(2147500000.0 * 0.3) / 180.0);
  }
  else if ( v3 == 1 && (*(_BYTE *)(**(_DWORD **)(FIELD_U32(a1, 268) + 12) + 28) & 0x20) != 0 )
  {
    FIELD_U32(a1, 80) = FIELD_U32(a1, 276);
    FIELD_U32(a1, 84) = FIELD_U32(a1, 280);
    FIELD_U32(a1, 88) = FIELD_U32(a1, 284);
    if ( ((unsigned int)&dword_60C8C0D0 & ~(1612691520 << v2) & 1) == 0 && _cxa_guard_acquire(&dword_60C8C0D0) )
    {
      dword_60C8C0D4 = (int)&sead__SafeStringBase__vtable;
      dword_60C8C0D8 = (int)"fall";
      dword_60C8C0DC = (int)&sead__SafeStringBase__vtable;
      dword_60C8C0E0 = (int)"enter";
      dword_60C8C0E4 = (int)&sead__SafeStringBase__vtable;
      dword_60C8C0E8 = (int)"wait";
      sub_60000288();
      _cxa_guard_release(&dword_60C8C0D0);
    }
    sub_6040F4B8(FIELD_U32(a1, 268), &dword_60C8C0E4, 1);
    FIELD_U32(a1, 272) = 2;
  }
  ModelWrapper_updateAnims(*(ModelWrapper **)(a1 + 268));
  if ( (FIELD_U8(a1, 216) & 8) == 0 )
  {
    sub_601FB64C(a1);
    if ( FIELD_U8(a1, 400) )
    {
      (*(void (__fastcall **)(_DWORD, _DWORD, _BYTE *))(***(_DWORD ***)(a1 + 268) + 108))(
        **(_DWORD **)(a1 + 268),
        FIELD_U32(a1, 292),
        v6);
      v5.x = v7;
      v5.y = v8;
      v5.z = v9;
      EffectWrapper_update((EffectWrapper *)(a1 + 296), 1215, &v5, 0, 0);
    }
  }
  return 1;
}
