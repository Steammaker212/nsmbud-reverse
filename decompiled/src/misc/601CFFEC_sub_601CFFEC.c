/* sub_601CFFEC
 * address: 0x601CFFEC   size: 304   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_601CFFEC(int a1, int a2)
{
  _DWORD *v3; // r4
  char v4; // r12

  v3 = (_DWORD *)ActorMgrRelated_getById(ActorMgr__instance + 27168, FIELD_U32(a1, 20));
  if ( ((unsigned int)&dword_60C88AB0 & ~(1612513324 << v4) & 1) == 0 && _cxa_guard_acquire(&dword_60C88AB0) )
  {
    dword_60C88AAC = (int)&off_60BD4BBC;
    _cxa_guard_release(&dword_60C88AB0);
  }
  if ( v3 && (*(int (__fastcall **)(_DWORD *, int *))*v3)(v3, &dword_60C88AAC) == 1 )
  {
    if ( a2 )
    {
      do
      {
        if ( (*(int (__fastcall **)(_DWORD *))(*v3 + 92))(v3) == 1 )
          (*(void (__fastcall **)(_DWORD *, float))(*v3 + 104))(v3, 0.0);
        v3 = (_DWORD *)v3[68];
      }
      while ( v3 );
    }
    else
    {
      do
      {
        if ( (*(int (__fastcall **)(_DWORD *))(*v3 + 92))(v3) == 1 )
          (*(void (__fastcall **)(_DWORD *))(*v3 + 100))(v3);
        v3 = (_DWORD *)v3[68];
      }
      while ( v3 );
    }
  }
}
