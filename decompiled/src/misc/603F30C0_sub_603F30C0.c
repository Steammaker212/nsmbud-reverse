/* sub_603F30C0
 * address: 0x603F30C0   size: 404   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void *__fastcall sub_603F30C0(int a1, int a2)
{
  int v3; // r5
  void *result; // r0
  int *v5; // r1
  _DWORD *v6; // r1
  int v7; // r1
  _DWORD *v8; // r2

  sub_60414014(dword_60C9A698);
  sub_60413FD0(dword_60C9A698);
  v3 = dword_60CD0B40;
  result = DrawMgr_instance;
  *((_DWORD *)DrawMgr_instance + 141) = FIELD_U32(a2, 40);
  if ( FIELD_U8(dword_60C9CEF0, 64) )
  {
    v5 = *(int **)(v3 + 36);
    if ( FIELD_U32(v3, 32) > 5u )
      v5 += 5;
    sub_602333E0(dword_60C8D904, *v5);
    v6 = *(_DWORD **)(v3 + 36);
    if ( FIELD_U32(v3, 32) > 9u )
      v6 += 9;
    sub_604431BC(DrawMgr_instance, *v6, 0);
    sub_60715DC8(TileMgr_instance);
    sub_6068C290(MaskMgr_instance);
    sub_60719AC0(dword_60CBD25C);
    sub_600089B0(ActorMgr__instance, a2);
    sub_603EDF48(dword_60C99CDC);
    sub_60443298(DrawMgr_instance);
    v7 = FIELD_U32(v3, 36);
    if ( FIELD_U32(v3, 32) > 9u )
      v7 += 36;
    sub_60450A7C(dword_60C9CEF0, FIELD_U32(a2, 40), *(_DWORD *)(*(_DWORD *)v7 + 420));
    return (void *)sub_60726E2C(dword_60CBD894);
  }
  else if ( dword_60CA059C )
  {
    v8 = *(_DWORD **)(v3 + 36);
    if ( FIELD_U32(v3, 32) > 0xFu )
      v8 += 15;
    sub_604431BC(result, *v8, 0);
    sub_60499988(dword_60CA059C);
    return (void *)sub_60443298(DrawMgr_instance);
  }
  return result;
}
