/* sub_601CFE3C
 * address: 0x601CFE3C   size: 212   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_601CFE3C(int a1)
{
  int (__fastcall ***v1)(_DWORD, int *); // r4
  char v2; // r12
  int v3; // r5
  int v4; // r0
  int v5; // r4
  _DWORD *v6; // r5
  int v7; // r0

  v1 = (int (__fastcall ***)(_DWORD, int *))ActorMgrRelated_getById(ActorMgr__instance + 27168, FIELD_U32(a1, 20));
  if ( ((unsigned int)&dword_60C88AB0 & ~(1612512884 << v2) & 1) == 0 && _cxa_guard_acquire(&dword_60C88AB0) )
  {
    dword_60C88AAC = (int)&off_60BD4BBC;
    _cxa_guard_release(&dword_60C88AB0);
  }
  v3 = (int)(v1 + 68);
  v4 = (**v1)(v1, &dword_60C88AAC);
  v5 = 1;
  if ( !v4 )
    v3 = 272;
  v6 = *(_DWORD **)v3;
  while ( v6 )
  {
    v7 = (*(int (__fastcall **)(_DWORD *))(*v6 + 92))(v6);
    v6 = (_DWORD *)v6[68];
    if ( v7 )
      ++v5;
  }
  return v5;
}
