/* sub_604811F4
 * address: 0x604811F4   size: 232   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall sub_604811F4(int a1, int a2, int a3)
{
  int v3; // r4
  int v4; // t1
  StateMgr *v5; // r4
  StateBase *v6; // r1

  v3 = a1;
  FIELD_U32(a1, 12832) = a2;
  FIELD_U16(a1, 12836) = 257;
  FIELD_U8(a1, 12838) = 0;
  sub_6047E0EC(&dword_60C9ECE8[2 * a3], FIELD_U32(a1, 12824), 0);
  sub_60473DE4((_DWORD *)(v3 + 2060), 0, &dword_60C9ECD8, 0);
  (*(void (__fastcall **)(_DWORD))(***(_DWORD ***)(v3 + 5572) + 104))(**(_DWORD **)(v3 + 5572));
  sub_60473B58((_DWORD *)(v3 + 2060), 0xEu, 0);
  FIELD_U32(v3, 5648) = 1;
  v4 = FIELD_U32(v3, 5644);
  v3 += 5644;
  *(_DWORD *)v3 = v4 | 1;
  v5 = (StateMgr *)(v3 - 5620);
  if ( sub_607F6ABC(dword_60CC62E4) == 1 )
    v6 = (StateBase *)&unk_60C9ED20;
  else
    v6 = (StateBase *)&unk_60C9ED40;
  return StateMgr__changeState(v5, v6);
}
