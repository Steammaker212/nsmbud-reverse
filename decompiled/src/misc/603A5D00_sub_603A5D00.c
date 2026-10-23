/* sub_603A5D00
 * address: 0x603A5D00   size: 432   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

float __fastcall sub_603A5D00(int a1, int a2)
{
  char v2; // r12
  float *v5; // r0
  float v6; // s0
  float v7; // s2
  float result; // s0
  float v9; // s0
  int v10; // s2

  if ( ((unsigned int)dword_60C97990 & ~(1614437660 << v2) & 1) == 0 && _cxa_guard_acquire(dword_60C97990) )
  {
    dword_60C979A4 = 0;
    dword_60C979A8 = 0;
    dword_60C979AC = 0;
    dword_60C979B0 = 0x40000000;
    dword_60C979B4 = 0;
    dword_60C979B8 = -1073741824;
    dword_60C979BC = -1073741824;
    dword_60C979C0 = 0;
    dword_60C979C4 = 0x40000000;
    dword_60C979C8 = 0;
    _cxa_guard_release(dword_60C97990);
  }
  if ( sub_601536B0((int)ColliderMgr_instance, a1 + 8) )
    ColliderMgr_removeRelated1(ColliderMgr_instance, (ColliderBase *)(a1 + 8));
  if ( *(_BYTE *)(a2 + FIELD_U32(a1, 724)) )
  {
    v5 = (float *)&dword_60C97990[2 * *(unsigned __int8 *)(a2 + FIELD_U32(a1, 724))];
    v6 = v5[5] + FIELD_F32(a1, 676);
    FIELD_F32(a1, 676) = v6;
    v7 = v5[6] + FIELD_F32(a1, 680);
    FIELD_F32(a1, 680) = v7;
    result = sqrtf(
               (float)((float)(v7 - FIELD_F32(a1, 716)) * (float)(v7 - FIELD_F32(a1, 716)))
             + (float)((float)(v6 - FIELD_F32(a1, 712)) * (float)(v6 - FIELD_F32(a1, 712))));
    if ( result >= 16.0 )
    {
      FIELD_U32(a1, 712) = FIELD_U32(a1, 676);
      FIELD_U32(a1, 716) = FIELD_U32(a1, 680);
      FIELD_U32(a1, 720) = FIELD_U32(a1, 684);
      ++FIELD_U32(a1, 724);
    }
  }
  else
  {
    v9 = *(float *)&dword_60C9784C + FIELD_F32(a1, 704);
    FIELD_F32(a1, 704) = v9;
    v10 = dword_60C97850;
    if ( v9 < *(float *)&dword_60C97850 )
    {
      FIELD_U32(a1, 704) = dword_60C97850;
      v9 = *(float *)&v10;
    }
    FIELD_F32(a1, 676) = FIELD_F32(a1, 676) + FIELD_F32(a1, 700);
    FIELD_F32(a1, 680) = FIELD_F32(a1, 680) + v9;
    result = FIELD_F32(a1, 684) + FIELD_F32(a1, 708);
    FIELD_F32(a1, 684) = result;
  }
  return result;
}
