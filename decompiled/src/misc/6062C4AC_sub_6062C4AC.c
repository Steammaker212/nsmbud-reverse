/* sub_6062C4AC
 * address: 0x6062C4AC   size: 200   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6062C4AC(int a1)
{
  int result; // r0
  float v3; // s0
  int v4; // r0
  char v5; // r1
  char *v6; // r0
  int *v7; // r1

  if ( FIELD_U32(a1, 6124) )
    sub_6062C57C(a1);
  result = FIELD_U32(a1, 6080);
  if ( result )
  {
    CollisionActor__handleGravity((CollisionActor *)a1);
    v3 = CollisionActor__handleSpeed((CollisionActor *)a1);
    CollisionMgr_process((_BYTE *)(a1 + 648), v3);
    v4 = FIELD_U32(a1, 2872);
    if ( (FIELD_U32(a1, 24) & 0x10000000) != 0 && (v4 & 0x10400) == 0x400 )
      FIELD_U32(a1, 124) = 0;
    if ( (v4 & 1) != 0 )
    {
      v7 = &dword_6062C574;
      if ( (v4 & 8) != 0 )
        v7 = &dword_6062C578;
      FIELD_U32(a1, 124) = *v7;
      v6 = (char *)(a1 + 6264);
      if ( !FIELD_U8(a1, 6264) )
        return sub_608337E0(a1 + 6192);
      FIELD_U32(a1, 6192) = 0x2000000;
      v5 = 0;
    }
    else
    {
      v5 = 1;
      v6 = (char *)(a1 + 6264);
    }
    *v6 = v5;
    return sub_608337E0(a1 + 6192);
  }
  return result;
}
