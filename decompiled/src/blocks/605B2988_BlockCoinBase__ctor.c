/* BlockCoinBase__ctor
 * address: 0x605B2988   size: 640   group: blocks
 * sym: BlockCoinBase::BlockCoinBase(ActorBuildInfo const*) as C2
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall BlockCoinBase__ctor(_DWORD *a1, ActorBuildInfo *a2)
{
  MultiStateActor__ctor((MultiStateActor *)a1, a2);
  *a1 = off_60C093FC;
  RectCollider_ctor((RectCollider *)(a1 + 1530));
  a1[1530] = off_60BC30D8;
  a1[1699] = 0;
  a1[1698] = 0;
  a1[1697] = 0;
  a1[1696] = 0;
  a1[1695] = 0;
  a1[1694] = 0;
  a1[1700] = 1065353216;
  a1[1701] = 1029701632;
  a1[1702] = 1067712512;
  a1[1703] = 0;
  a1[1704] = 0;
  a1[1705] = 0;
  a1[1706] = -1;
  a1[1709] = 0;
  a1[1708] = 0;
  a1[1707] = 0;
  *((_BYTE *)a1 + 6840) = -1;
  *((_BYTE *)a1 + 6854) = 0;
  *((_BYTE *)a1 + 6853) = 0;
  *((_BYTE *)a1 + 6850) = 0;
  *((_BYTE *)a1 + 6846) = 0;
  *((_BYTE *)a1 + 6842) = 0;
  *((_BYTE *)a1 + 6855) = 0;
  *((_BYTE *)a1 + 6849) = 0;
  *((_BYTE *)a1 + 6852) = 0;
  *((_BYTE *)a1 + 6851) = 0;
  *((_BYTE *)a1 + 6845) = 0;
  *((_BYTE *)a1 + 6848) = 0;
  *((_BYTE *)a1 + 6847) = 0;
  *((_BYTE *)a1 + 6841) = 0;
  *((_BYTE *)a1 + 6844) = 0;
  *((_BYTE *)a1 + 6843) = 0;
  a1[1714] = 21;
  a1[1715] = 0;
  a1[1716] = 0;
  *((_BYTE *)a1 + 6868) = 0;
  *((_BYTE *)a1 + 6960) = 0;
  a1[1741] = 0;
  a1[30] = 0;
  a1[31] = 0;
  a1[32] = 0;
  memset(a1 + 1718, 0, 40);
  a1[1526] = -1059061760;
  a1[1527] = 1088421888;
  a1[1528] = 1098907648;
  a1[1728] = 0;
  *((_BYTE *)a1 + 6919) = 0;
  *((_BYTE *)a1 + 6916) = -1;
  *((_BYTE *)a1 + 6917) = -1;
  *((_BYTE *)a1 + 6918) = -1;
  *((_BYTE *)a1 + 6920) = -1;
  a1[1731] = 0;
  *((_BYTE *)a1 + 6931) = 0;
  *((_BYTE *)a1 + 6928) = -1;
  *((_BYTE *)a1 + 6929) = -1;
  *((_BYTE *)a1 + 6930) = -1;
  *((_BYTE *)a1 + 6932) = -1;
  a1[1734] = 0;
  *((_BYTE *)a1 + 6943) = 0;
  *((_BYTE *)a1 + 6940) = -1;
  *((_BYTE *)a1 + 6941) = -1;
  *((_BYTE *)a1 + 6942) = -1;
  *((_BYTE *)a1 + 6944) = -1;
  a1[1737] = 0;
  a1[1738] = 0xFFFFFF;
  *((_BYTE *)a1 + 6956) = -1;
  return a1;
}
