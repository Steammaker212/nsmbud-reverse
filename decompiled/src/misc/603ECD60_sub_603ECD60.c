/* sub_603ECD60
 * address: 0x603ECD60   size: 124   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_603ECD60(int result)
{
  _DWORD *v1; // r4
  _DWORD *v2; // r1
  _DWORD *v3; // r1
  _DWORD *v4; // r1
  _DWORD *v5; // r1

  v1 = (_DWORD *)result;
  v2 = *(_DWORD **)(result + 92);
  if ( v2 )
    result = DrawMgr_drawModel2(DrawMgr_instance, v2);
  v3 = (_DWORD *)v1[24];
  if ( v3 )
    result = DrawMgr_drawModel2(DrawMgr_instance, v3);
  v4 = (_DWORD *)v1[25];
  if ( v4 )
    result = DrawMgr_drawModel2(DrawMgr_instance, v4);
  v5 = (_DWORD *)v1[26];
  if ( v5 )
    return DrawMgr_drawModel2(DrawMgr_instance, v5);
  return result;
}
