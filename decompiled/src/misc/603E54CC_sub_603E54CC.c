/* sub_603E54CC
 * address: 0x603E54CC   size: 96   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_603E54CC(int a1, Actor *actor)
{
  int v2; // lr
  bool v3; // zf
  int ret; // r2
  int v5; // r12

  v3 = actor == 0;
  ret = 0;
  if ( actor )
  {
    v2 = FIELD_U32(a1, 32);
    v3 = v2 == 0;
  }
  if ( v3 )
    return ret;
  if ( FIELD_U8(actor, 0x13) )
    return ret;
  v5 = FIELD_U32(actor, 0x4C);
  ret = 1;
  if ( (v5 & 2) != 0 )
    return ret;
  if ( (v5 & 4) != 0 )
    return sub_603E5154(a1);
  return (*(int (__fastcall **)(int))(*(_DWORD *)v2 + 36))(v2);
}
