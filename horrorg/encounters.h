#pragma once
//code for encounters that are chosen 
class encounters
{
    function player_combos(array players, int minimum_total) {
        array result = []
            players = sort(players, metric = most points first)
            int total = 0
            for p1 in 0 ..length(players) {
                if players[p1].points * 10 < minimum_total - total:
                break
                    total += players[p1].points
                    for p2 in p1 + 1 ..length(players) {
                        if players[p2].points * 9 < minimum_total - total:
                        break
                            total += players[p2].points
                            for p3 in p2 + 1 ..length(players) {
                                if players[p3].points * 8 < minimum_total - total:
                                break
                                    total += players[p3].points
                                    // continue these nested loops up to p10
                                    ...
                                    for p10 in p9 + 1 ..length(players) :
                                        if players[p10].points < mininum_total - total :
                                            break
                                            // this is a valid combination
                                            result.append((p1, p2, p3, p4, p5, p6, p7, p8, p9, p10))
                                            ...
                                            // remember to decrement total when we finish a loop iteration
                                            total -= players[p3].points
                            }
                        total -= players[p2].points
                    }
                total -= players[p1].points
            }
        return result
    }
};

