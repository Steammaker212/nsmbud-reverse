/* sub_6046F8FC
 * address: 0x6046F8FC   size: 224   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6046F8FC(Actor *a1)
{
  int v2; // r5
  unsigned int *v3; // r6
  int ActorSlotChecked; // r0
  int v6; // [sp+4h] [bp-14h] BYREF

  v2 = 0;
  if ( sub_60463998(a1, &v6, 1, 0) == 1 )
  {
    v3 = (unsigned int *)&FIELD_U32(a1 + (77) * 80, 0x30);
    sub_6046395C((int)a1, FIELD_U32(a1 + (77) * 80, 0x30));
    ActorSlotChecked = Player_getActorSlotChecked(PlayerMgr_instance, FIELD_U32(a1 + (77) * 80, 0x30));
    if ( ActorSlotChecked )
      (*(void (__fastcall **)(int, _DWORD, _DWORD))(*(_DWORD *)ActorSlotChecked + 1200))(ActorSlotChecked, 0, 0);
    v2 = 1;
    sub_600221A0(dword_60C7F52C, 4, *v3, 1);
    sub_603FFD80(dword_60C99DD4 + 852);
    sub_60463228((int)a1, *v3);
    sub_604635F4((int)a1);
    sub_604630C8((int)a1);
    (*(void (__fastcall **)(Actor *, int *))(FIELD_U32(a1, 0x0) + 192))(a1, &dword_60C9D81C);
  }
  return v2;
}
