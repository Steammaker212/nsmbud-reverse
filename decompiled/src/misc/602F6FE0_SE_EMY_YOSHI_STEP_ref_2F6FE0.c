/* SE_EMY_YOSHI_STEP_ref_2F6FE0
 * address: 0x602F6FE0   size: 136   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall SE_EMY_YOSHI_STEP_ref_2F6FE0(int a1, int a2, int a3)
{
  int v6; // r5

  if ( FIELD_U8(a1, 6320) )
  {
    v6 = FIELD_U32(a3, 64);
    if ( v6 )
    {
      sub_602A3520((float *)a1, "SE_EMY_YOSHI_STEP", 0);
      (*(void (__fastcall **)(int, int))(*(_DWORD *)a1 + 380))(a1, v6);
      return 1;
    }
  }
  else
  {
    sub_603FFD60(dword_60C99DD4 + 852);
    Enemy__collisionGroundPoundYoshi(a1, a2, a3);
  }
  return 1;
}
