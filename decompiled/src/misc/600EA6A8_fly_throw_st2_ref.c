/* fly_throw_st2_ref
 * address: 0x600EA6A8   size: 300   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall fly_throw_st2_ref(int a1)
{
  int v2; // r0
  int v3; // r1
  int v4; // r5
  int v5; // r6

  v2 = FIELD_U8(a1, 8132);
  v3 = a1;
  if ( v2 )
    v3 = FIELD_U32(a1, 56);
  if ( FIELD_U8(v3, 8232) )
  {
    v4 = a1;
    if ( v2 )
      v4 = FIELD_U32(a1, 56);
    if ( !(*(int (__fastcall **)(int))(*(_DWORD *)v4 + 716))(v4) )
      (*(int (__fastcall **)(int))(*(_DWORD *)v4 + 720))(v4);
  }
  else
  {
    v5 = a1;
    if ( v2 )
      v5 = FIELD_U32(a1, 56);
    if ( !(*(int (__fastcall **)(int))(*(_DWORD *)v5 + 716))(v5) )
      (*(int (__fastcall **)(int))(*(_DWORD *)v5 + 720))(v5);
  }
  sub_60421AD4(FIELD_U32(a1, 7096));
}
