/* PlayerBase_vf8
 * address: 0x6075EA1C   size: 224   group: player
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall PlayerBase_vf8(_DWORD *a1)
{
  int v2; // r0
  int v3; // r0
  float v4; // s0
  Vec2 v6; // [sp+0h] [bp-20h] BYREF
  Vec3 position; // [sp+8h] [bp-18h] BYREF

  v2 = a1[161];
  if ( v2 && (v3 = v2 - 1, (a1[161] = v3) != 0) )
  {
    sub_607612CC(a1, 1);
  }
  else
  {
    sub_6078632C(a1 + 172);
    (*(void (__fastcall **)(_DWORD *))(*a1 + 1080))(a1);
    (*(void (__fastcall **)(_DWORD *))(*a1 + 200))(a1);
    (*(void (__fastcall **)(_DWORD *))(*a1 + 132))(a1);
    sub_607865EC(a1 + 172);
    v4 = *((float *)a1 + 28) + *((float *)a1 + 144);
    position.x = *((float *)a1 + 27) + *((float *)a1 + 143);
    position.y = v4;
    mapPositionToScreen(&v6, &position);
    MovingSoundActor_setPosition((MovingSoundActor *)(a1 + 210), &v6);
  }
  (*(void (__fastcall **)(_DWORD *))(*a1 + 136))(a1);
  (*(void (__fastcall **)(_DWORD *))(*a1 + 208))(a1);
  return 1;
}
