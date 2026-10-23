/* sub_60026BFC
 * address: 0x60026BFC   size: 192   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60026BFC(_DWORD *a1)
{
  *a1 = off_60C28A60;
  a1[69] = MovingSoundActorHandle_vtable;
  sub_608AC1C0(a1 + 73);
  sead__IDisposer__dtor(a1 + 69);
  a1[63] = MovingSoundActorHandle_vtable;
  sub_608AC1C0(a1 + 67);
  sead__IDisposer__dtor(a1 + 63);
  a1[57] = MovingSoundActorHandle_vtable;
  sub_608AC1C0(a1 + 61);
  sead__IDisposer__dtor(a1 + 57);
  a1[51] = MovingSoundActorHandle_vtable;
  sub_608AC1C0(a1 + 55);
  sead__IDisposer__dtor(a1 + 51);
  a1[45] = MovingSoundActorHandle_vtable;
  sub_608AC1C0(a1 + 49);
  sead__IDisposer__dtor(a1 + 45);
  a1[39] = MovingSoundActorHandle_vtable;
  sub_608AC1C0(a1 + 43);
  sead__IDisposer__dtor(a1 + 39);
  return SoundActor_vf0(a1);
}
