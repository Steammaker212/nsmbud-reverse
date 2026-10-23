/* sub_605B7C10
 * address: 0x605B7C10   size: 104   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_605B7C10(int a1)
{
  unsigned int v2; // r9
  unsigned int v3; // r5
  unsigned int v4; // r8
  unsigned int v5; // r7
  unsigned int v6; // r4
  unsigned int v7; // r0
  int result; // r0

  v2 = 0;
  v3 = FIELD_U32(a1, 676);
  v4 = FIELD_U32(a1, 680);
  do
  {
    v5 = 0;
    v6 = 0;
    if ( v2 < 0x20 )
      v5 = v2;
    do
    {
      v7 = 0;
      if ( v6 < 4 )
        v7 = v6;
      result = DrawMgr_drawModel2(DrawMgr_instance, *(_DWORD **)(a1 + 16 * v5 + 4 * v7 + 164));
      ++v6;
    }
    while ( v6 < v3 );
    ++v2;
  }
  while ( v2 < v4 );
  return result;
}
